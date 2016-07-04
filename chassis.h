#ifndef _chassis_
#define _chassis_
#include <Arduino.h>
// Class for Chassis

/* *********

usage:

chassis obj(P1_0, P1_6, P1_2, P1_1); // This creates an object for the chassis class
chassis obj(A1, A0, A2, A3);

obj.forward(700);


************/
#define FWD HIGH
#define BKW LOW

class chassis{
	public:
		// Varibles for Pins
		int pEnable1, pEnable2, pDir1, pDir2;
		unsigned char ucSpeed;
                //Default Constructor
                chassis(){
                    //do an error message here perhaps
                    ucSpeed=0;
                }
		// Constructor
		chassis(int a, int b, int c, int d){
			// Set the Pin Values
			pDir1=a;
			pEnable1=b;
			pEnable2=c;
			pDir2=d;
			// Inital configuration for the pins
			pinMode(pEnable1, OUTPUT);
			pinMode(pEnable2, OUTPUT);
			pinMode( pDir1, OUTPUT);
			pinMode( pDir2, OUTPUT);
			  
			digitalWrite(pDir1, FWD); // Set Inital Direction to HIGH?
			digitalWrite(pDir2, FWD);
			  
			analogWrite(pEnable1, 0x00); // Set initial speed to zero
			analogWrite(pEnable2, 0x00);
		}
		// Function Prototypes
		void forward(int);
                void backward(int);
                void right(int);
                void left(int);
                
                void setSpeed(unsigned char);	
};

#endif
