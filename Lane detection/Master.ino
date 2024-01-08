char data ;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);
  Serial.begin(9600);
  // delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  int forward = digitalRead(13);
  int backward = digitalRead(12);
  int right = digitalRead(11);
  int left = digitalRead(10);
  if(forward == 0 ||  backward == 0 || right == 0 || left == 0)
  {
    if(forward == 0)
    {
      data = 'A';
      Serial.println(data);
      delay(10);
    }
    if(backward == 0)
    {
      data = 'B';
      Serial.println(data);
      delay(10);
    }
    if(right == 0)
    {
      data = 'C';
      Serial.println(data);
      delay(10);
    }
    if(left == 0)
    {
      data = 'D';
      Serial.println(data);
      delay(10);
    }
  }
  else
  {
    data = 'E';
    Serial.println(data);
      // delay(10);
  }
  // delay(10);

  // for(int i=0;i<5;i++){
  //   data = 'A';
  //   Serial.println(data);
  //   delay(100);
  // }
  // for(int i=0;i<5;i++){
  //   data = 'B';
  //   Serial.println(data);
  //   delay(100);
  // }
}
