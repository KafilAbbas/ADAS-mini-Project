int constant1 = 13;
int Latch  = 12;
int Clock = 11;
int reset = 10;
void clocklatch(){
  digitalWrite(Clock, HIGH);
  digitalWrite(Latch,HIGH);
  delay(100);
  digitalWrite(Clock, LOW);
  digitalWrite(Latch,LOW);
  delay(100);
}
void setup() {
  pinMode(constant1,OUTPUT);
  pinMode(Latch,OUTPUT);
  pinMode(Clock,OUTPUT);
  pinMode(reset,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(reset,HIGH);
  digitalWrite(constant1,HIGH);
  for(int i=0;i<4;i++){
    clocklatch();
  }
  digitalWrite(constant1,LOW);
  digitalWrite(reset,LOW);
  digitalWrite(reset,HIGH);
  for(int i=0;i<4;i++){
    clocklatch();
  }
  // digitalWrite(Clock, HIGH);
  // digitalWrite(Latch,HIGH);
  // delay(100);
  // digitalWrite(Clock, LOW);
  // digitalWrite(Latch,LOW);
  // delay(100);
}
