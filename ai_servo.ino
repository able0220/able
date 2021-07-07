#include <Servo.h>

char data;

Servo servo1;


void setup() {
  servo1.attach(8);
  Serial.begin(9600);
}

void loop() {
 data = Serial.read();
 
  if(data == '1')
  {
      servo1.write(10);  
  }
  else if(data == '2')
  {
      servo1.write(90);   
  }
  



  
}
