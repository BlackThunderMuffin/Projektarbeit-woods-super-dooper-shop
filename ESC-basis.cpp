
#include <Servo.h>


Servo esc;  

void setup() {
  esc.attach(8);// attaches the servo on pin 9 to the servo object
  esc.writeMicroseconds(1000);
  Serial.begin(9600);
 
}


void loop() {
  int val;
  int s;
  val=random(1550,2000);
  s=random(0,3000);
  esc.writeMicroseconds(val);
  delay(s);
  }
