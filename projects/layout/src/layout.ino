#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

class Flasher
{
    int ledc, ledx, ledy, ledsize, ledoff; 
    long OnTime, OffTime;

    int ledState;			// used to set the display state
    unsigned long previousMillis;	// stores last time grid was updated

    public:
    Flasher(int x, int y, int size, int color, long on, long off )
    {
	ledx = x;
	ledy = y;
	ledsize = size;
	ledc = color;

	if(off==0)  		// a zero for "off" will in turn keep the LED display on w/o flicker
	  ledoff = ledc;
	else
	  ledoff = BLACK;

 	OnTime = on;
	OffTime = off;

	ledState = LOW;
	previousMillis = 0;
    }
    
    void Update()
    {
	unsigned long currentMillis = millis();
	
	if( (ledState == HIGH) && ( (currentMillis - previousMillis) >= OnTime) )
	{
		ledState = LOW;
		previousMillis = currentMillis;
		Tft.fillCircle(ledx,ledy,ledsize,ledoff);
	}
	else if( (ledState == LOW) && ( (currentMillis - previousMillis) >= OffTime) )
	{
		ledState = HIGH;
		previousMillis = currentMillis;
		Tft.fillCircle(ledx,ledy,ledsize,ledc);
	}
    }	    
};

Flasher led1(80,  10, 10, GREEN, 100,0);
Flasher led2(80,  40, 10, GREEN, 100,0);
Flasher led3(80,  70, 10, GREEN, 100,0);
Flasher led4(80,  100, 10, GREEN, 100,0);
Flasher led5(80,  130, 10, GREEN, 100,0);
Flasher led6(80,  160, 10, GREEN, 100,0);
Flasher led7(80,  190, 10, GREEN, 100,0);
Flasher led8(80,  220, 10, GREEN, 100,0);
Flasher led9(80,  250, 10, GREEN, 100,0);
Flasher led10(80, 280, 10, GREEN, 100,0);
Flasher led11(80, 310, 10, GREEN, 100,0);

void setup()
{
    TFT_BL_ON;                                      // turn on the background light
    Tft.TFTinit();                                  // init TFT library

    Tft.drawString("D01",0,0,3,WHITE);
    Tft.drawString("D02",0,30,3,WHITE);
    Tft.drawString("D03",0,60,3,WHITE);
    Tft.drawString("D04",0,90,3,WHITE);
    Tft.drawString("D05",0,120,3,WHITE);
    Tft.drawString("D06",0,150,3,WHITE);
    Tft.drawString("D07",0,180,3,WHITE);
    Tft.drawString("D08",0,210,3,WHITE);
    Tft.drawString("D09",0,240,3,WHITE);
    Tft.drawString("D10",0,270,3,WHITE);
    Tft.drawString("D11",0,300,3,WHITE);
}

void loop()
{
	led1.Update();
	led2.Update();
	led3.Update();
	led4.Update();
	led5.Update();
	led6.Update();
	led7.Update();
	led8.Update();
	led9.Update();
	led10.Update();
	led11.Update();
}
