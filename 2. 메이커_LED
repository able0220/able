
char data;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  if(Serial.available()){

    data = Serial.read();
    if(data == '1')  // 티처블머신에서 사진이 1번이면 {   } 안에 내용 실행
    {
      analogWrite(9,100);
      analogWrite(10,0);
      analogWrite(11,0);
      // 9번 10번 11번 에 불빛 조합으로 색 결정
    }
    else if(data == '2')
    {
      
      analogWrite(9,0);
      analogWrite(10,100);
      analogWrite(11,0);
    }

    
  }


}
