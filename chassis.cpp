#include <Arduino.h>
#include "chassis.h"

void chassis::forward(int a){
			  digitalWrite(pDir1, FWD);
			  digitalWrite(pDir2, FWD);
			  analogWrite(pEnable1, ucSpeed);
			  analogWrite(pEnable2, ucSpeed);
			  delay(a);
			  analogWrite(pEnable1, 0);
			  analogWrite(pEnable2, 0);
			
		}
void chassis::backward(int a){
                	  digitalWrite(pDir1, BKW);
			  digitalWrite(pDir2, BKW);
			  analogWrite(pEnable1, ucSpeed);
			  analogWrite(pEnable2, ucSpeed);
			  delay(a);
			  analogWrite(pEnable1, 0);
			  analogWrite(pEnable2, 0);
			
		}

void chassis::right(int a){
                	  digitalWrite(pDir1, FWD);
			  digitalWrite(pDir2, BKW);
			  analogWrite(pEnable1, ucSpeed);
			  analogWrite(pEnable2, ucSpeed);
			  delay(a);
			  analogWrite(pEnable1, 0);
			  analogWrite(pEnable2, 0);
			
		}

void chassis::left(int a){
                	  digitalWrite(pDir1, BKW);
			  digitalWrite(pDir2, FWD);
			  analogWrite(pEnable1, ucSpeed);
			  analogWrite(pEnable2, ucSpeed);
			  delay(a);
			  analogWrite(pEnable1, 0);
			  analogWrite(pEnable2, 0);
			
		}
