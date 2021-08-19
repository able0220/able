#include <Servo.h>

char data;

Servo servo1;


void setup() {
  servo1.attach(8);
  Serial.begin(9600);
}

void loop() {
 data = Serial.read();
 
  if(data == '1') // 티처블 머신에서 사진 판별이 1번이라면 {  }안에 내용을 실행
  {
      servo1.write(10);   // 서보모터를 10도로 움직이기
  }
  else if(data == '2') // 티처블 머신에서 사진 판별이 2번이라면 {  }안에 내용을 실행
  {
      servo1.write(90);   // 서보모터를 90의 위치로 움직이기
  }
  



  
}
