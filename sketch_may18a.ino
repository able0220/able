
char data;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  if(Serial.available()){

    data = Serial.read();
    if(data == '1')
    {
      analogWrite(9,100);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    else if(data == '2')
    {
      
      analogWrite(9,0);
      analogWrite(10,100);
      analogWrite(11,0);
    }

    
  }


}
