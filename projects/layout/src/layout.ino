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

Flasher led1(80, 10, 10, RED, 100,100);
Flasher led2(200, 100, 20, GREEN,1000,400);
Flasher led3(100, 200, 20, BLUE,200,200);
Flasher led4(80, 40, 10, GREEN, 100,0);

void setup()
{
    TFT_BL_ON;                                      // turn on the background light
    Tft.TFTinit();                                  // init TFT library
    Tft.drawString("AR1",0,0,3,WHITE);
    Tft.drawString("AR2",0,30,3,WHITE);
}

void loop()
{
	led1.Update();
	led2.Update();
	led3.Update();
	led4.Update();
}
