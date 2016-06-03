#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

float ltx = 0;    // Saved x coord of bottom of needle
uint16_t osx = 120, osy = 120; // Saved x & y coords
uint32_t updateTime = 0;       // time for next update

int old_analog =  -999; // Value last displayed
int old_digital = -999; // Value last displayed

void setup()
{
    TFT_BL_ON;                                      // turn on the background light
    Tft.TFTinit();                                  // init TFT library

    //Tft.setRotation(2);

    //Tft.fillScreen(BLACK);

    analogMeter(); // Draw analogue meter

    //Tft.fillCircle(ledx,ledy,ledsize,ledc);
    Tft.drawString("D01",0,0,3,WHITE);

    updateTime = millis(); // Next update time
}

void loop()
{
  if (updateTime <= millis()) {
    updateTime = millis() + 500;

    int reading = 0;
    reading = random(-50, 151); // Test with random value
    reading = map(analogRead(A0),0,1023,0,100); // Test with value form Analog 0

    plotNeedle(reading, 8); // Update analogue meter, 8ms delay per needle increment
    
  }
}

// #########################################################################
//  Draw the analogue meter on the screen
// #########################################################################
void analogMeter()
{
  // Meter outline
  Tft.fillRectangle(0, 0, 239, 126, GRAY1);
  Tft.fillRectangle(5, 3, 230, 119, WHITE);
  
  //Tft.setTextColor(BLACK);  // Text colour
  
  // Draw ticks every 5 degrees from -50 to +50 degrees (100 deg. FSD swing)
  for (int i = -50; i < 51; i += 5) {
    // Long scale tick length
    int tl = 15;
    
    // Coodinates of tick to draw
    float sx = cos((i - 90) * 0.0174532925);
    float sy = sin((i - 90) * 0.0174532925);
    uint16_t x0 = sx * (100 + tl) + 120;
    uint16_t y0 = sy * (100 + tl) + 140;
    uint16_t x1 = sx * 100 + 120;
    uint16_t y1 = sy * 100 + 140;
    
    // Coordinates of next tick for zone fill
    float sx2 = cos((i + 5 - 90) * 0.0174532925);
    float sy2 = sin((i + 5 - 90) * 0.0174532925);
    int x2 = sx2 * (100 + tl) + 120;
    int y2 = sy2 * (100 + tl) + 140;
    int x3 = sx2 * 100 + 120;
    int y3 = sy2 * 100 + 140;
    
    // Yellow zone limits
    //if (i >= -50 && i < 0) {
    //  Tft.fillTriangle(x0, y0, x1, y1, x2, y2, YELLOW);
    //  Tft.fillTriangle(x1, y1, x2, y2, x3, y3, YELLOW);
    //}
    
    // Green zone limits
    //if (i >= 0 && i < 25) {
    //  Tft.fillTriangle(x0, y0, x1, y1, x2, y2, GREEN);
    // Tft.fillTriangle(x1, y1, x2, y2, x3, y3, GREEN);
    //}

    // Red zone limits
    //if (i >= 25 && i < 50) {
    //  Tft.fillTriangle(x0, y0, x1, y1, x2, y2, RED);
    //  Tft.fillTriangle(x1, y1, x2, y2, x3, y3, RED);
    //}
    
    // Short scale tick length
    if (i % 25 != 0) tl = 8;
    
    // Recalculate coords incase tick lenght changed
    x0 = sx * (100 + tl) + 120;
    y0 = sy * (100 + tl) + 140;
    x1 = sx * 100 + 120;
    y1 = sy * 100 + 140;
    
    // Draw tick
    Tft.drawLine(x0, y0, x1, y1, BLACK);
    
    // Check if labels should be drawn, with position tweaks
    if (i % 25 == 0) {
      // Calculate label positions
      x0 = sx * (100 + tl + 10) + 120;
      y0 = sy * (100 + tl + 10) + 140;
      switch (i / 25) {
        case -2: Tft.drawString("0", x0, y0 - 12, 2,BLACK); break;
        case -1: Tft.drawString("25", x0, y0 - 9, 2, BLACK); break;
        case 0: Tft.drawString("50", x0, y0 - 6, 2, BLACK); break;
        case 1: Tft.drawString("75", x0, y0 - 9, 2, BLACK); break;
        case 2: Tft.drawString("100", x0, y0 - 12, 2, BLACK); break;
      }
    }
    
    // Now draw the arc of the scale
    sx = cos((i + 5 - 90) * 0.0174532925);
    sy = sin((i + 5 - 90) * 0.0174532925);
    x0 = sx * 100 + 120;
    y0 = sy * 100 + 140;
    // Draw scale arc, don't draw the last part
    if (i < 50) Tft.drawLine(x0, y0, x1, y1, BLACK);
  }
  
  Tft.drawString("%RH", 5 + 230 - 40, 119 - 20, 2, BLACK); // Units at bottom right
  //Tft.drawCentreString("%RH", 120, 70, 4); // Comment out to avoid font 4
  Tft.drawRectangle(5, 3, 230, 119, BLACK); // Draw bezel line
  
  plotNeedle(0,0); // Put meter needle at 0
}

// #########################################################################
// Update needle position
// This function is blocking while needle moves, time depends on ms_delay
// 10ms minimises needle flicker if text is drawn within needle sweep area
// Smaller values OK if text not in sweep area, zero for instant movement but
// does not look realistic... (note: 100 increments for full scale deflection)
// #########################################################################
void plotNeedle(int value, byte ms_delay)
{
  //Tft.setTextColor(BLACK, WHITE);
  char buf[8]; dtostrf(value, 4, 0, buf);
  //Tft.drawRightString(buf, 40, 119 - 20, 2);

  if (value < -10) value = -10; // Limit value to emulate needle end stops
  if (value > 110) value = 110;

  // Move the needle util new value reached
  while (!(value == old_analog)) {
    if (old_analog < value) old_analog++;
    else old_analog--;
    
    if (ms_delay == 0) old_analog = value; // Update immediately id delay is 0
    
    float sdeg = map(old_analog, -10, 110, -150, -30); // Map value to angle 
    // Calcualte tip of needle coords
    float sx = cos(sdeg * 0.0174532925);
    float sy = sin(sdeg * 0.0174532925);

    // Calculate x delta of needle start (does not start at pivot point)
    float tx = tan((sdeg+90) * 0.0174532925);
    
    // Erase old needle image
    Tft.drawLine(120 + 20 * ltx - 1, 140 - 20, osx - 1, osy, WHITE);
    Tft.drawLine(120 + 20 * ltx, 140 - 20, osx, osy, WHITE);
    Tft.drawLine(120 + 20 * ltx + 1, 140 - 20, osx + 1, osy, WHITE);
    
    // Re-plot text under needle
    //Tft.setTextColor(BLACK);
    //Tft.drawCentreString("%RH", 120, 70, 4); // // Comment out to avoid font 4
    
    // Store new needle end coords for next erase
    ltx = tx;
    osx = sx * 98 + 120;
    osy = sy * 98 + 140;
    
    // Draw the needle in the new postion, magenta makes needle a bit bolder
    // draws 3 lines to thicken needle
    Tft.drawLine(120 + 20 * ltx - 1, 140 - 20, osx - 1, osy, RED);
    Tft.drawLine(120 + 20 * ltx, 140 - 20, osx, osy, BLUE);
    Tft.drawLine(120 + 20 * ltx + 1, 140 - 20, osx + 1, osy, RED);
    
    // Slow needle down slightly as it approaches new postion
    if (abs(old_analog - value) < 10) ms_delay += ms_delay / 5;
    
    // Wait before next update
    delay(ms_delay);
  }
}
