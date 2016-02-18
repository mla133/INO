
/* 
	NOTE: you must: #include <NewSoftSerial.h>
	http://arduino.cc/en/Reference/Libraries
	BEFORE including the class header file
	
				For Parallax� LCD's (27976, 27977, 27979)
				For more information contact http://www.parallax.com	
	      
	      Douglas Farrell	
				cyberblob59@yahoo.com
			  
			  Used/Modified with permission from allen joslin
			--Based on SparkFunSerLCD.h from--
				allen joslin
				payson productions
				allen@joslin.net
*/

#ifndef ParallaxLCD_h
#define ParallaxLCD_h

#include "WProgram.h"

/******************************************************************************************************/
/* ParallaxLCD -- manages the Parallax LCD's, based on NewSoftSerial to aid pinning and printing      */
/*                                                                                                    */
/*		 Stable Serial Speeds 2400, 9600, 19200                                                         */
/*                                                                                                    */
/*     posBase: cursor positioning                                                                    */
/*                                                                                                    */
/*     on/off: display of characters                                                                  */
/*                                                                                                    */
/*     bright: backlight control, on or off                                                           */
/*                                                                                                    */
/*     LF: Line Feed control                                                                          */
/*                                                                                                    */
/*     CR: Carrage Return control                                                                     */
/*                                                                                                    */
/*     Cursor: Cursor Control                                                                         */
/*                                                                                                    */
/******************************************************************************************************/

	class ParallaxLCD : public NewSoftSerial {
private:
	int _bv[9];
	int _ro[5];

public:
	ParallaxLCD ( int pin, int numRows, int numCols, int posBase=1 );
	 void setup ( boolean startEmpty=true ); 

   void on ();
   void off ();
   void lf ();
   void cr ();
   void empty ();

   void scrollLeft ();
   void scrollRight ();

   void backLightOn (); //Backlight only available with model numbers 27977, 27979
   void backLightOff (); //Backlight only available with model numbers 27977, 27979
   
   void pos ( int row, int col );

   void cursorUnderline();
   void cursorBlock();
   void cursorOnChrBlink();
   void cursorOff ();

	// shortcuts for printing at particular positions
   void at ( int row, int col, char );
   void at ( int row, int col, const char[] );
   void at ( int row, int col, uint8_t );
   void at ( int row, int col, int );
   void at ( int row, int col, unsigned int );
   void at ( int row, int col, long );
   void at ( int row, int col, unsigned long );
   void at ( int row, int col, long, int );

};


#endif
