#include <LiquidCrystal.h>
#include "chassis.h"

chassis robot(P1_0, P1_6, P1_2, P1_1);
LiquidCrystal lcd(P2_0, P2_1, P2_2, P2_3, P2_4, P2_5);

void test_chassis(void){
  delay(3000);
  lcd.clear(); 
  lcd.setCursor(0,1);
  lcd.print("Forward");
  robot.forward(700);
  
  
  lcd.clear(); 
  lcd.setCursor(0,1);
  lcd.print("Backward");
  robot.backward(700);

  
  lcd.clear(); 
  lcd.setCursor(0,1);
  lcd.print("Right");
  robot.right(500);
  
  
  lcd.clear(); 
  lcd.setCursor(0,1);
  lcd.print("left");
  robot.left(500);
  
  lcd.clear(); 
  lcd.setCursor(0,1);
  lcd.print("Pausing for 5 seconds");
  delay(5000);
}
void setup()
{
  // put your setup code here, to run once:

  lcd.begin(16, 2);
  lcd.print("Starting Up!");
  delay(3000);
  //test_chassis();
}

void loop()
{
  // put your main code here, to run repeatedly:
  int L,R;
  robot.ucSpeed=170;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Analog inputs:");
  lcd.setCursor(0,1);
  R=analogRead(A4);
  lcd.print(R);  
  
  lcd.setCursor(6,1);
  L=analogRead(A3);
  lcd.print(L);
  
  if(R>400 && L<400){
    robot.right(100);
  }else if(R<400 && L>400){
    robot.left(100);
  }else if(R<400 && L<400){
    robot.forward(100);
  }else if(R>400 && L>400){
    //Do nothing.
    delay(100);
  }
  
    
    //delay(100);
   
  
}
