#include <AFMotor.h>

bool button;
AF_DCMotor motor3(4);
AF_DCMotor motor2(2);
const int trigPin = 9;
const int echoPin = 6;long duration;
int distance;
char data;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  motor3.setSpeed(255);
  motor2.setSpeed(255);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
    if (Serial.available() > 0) {
      data = Serial.read();
      Serial.println(data);
      if(data == 'A')
      {
        motor2.run(FORWARD);
        motor3.run(FORWARD);
        // Serial.println("FORWARD");
        // delay(10);
      }
      else if(data == 'B')
      {
        motor2.run(BACKWARD);
        motor3.run(BACKWARD);
        // Serial.println("BACKWARD");
        // delay(10);
      }
      else if(data == 'C')
      {
        motor2.run(FORWARD);
        motor3.run(RELEASE);
        // Serial.println("Right");
        // delay(10);
      }
      else if(data == 'D')
      {
        motor2.run(RELEASE);
        motor3.run(FORWARD);
        // Serial.println("Left");
        // delay(10);
      }
      else if(data == 'E')
      {
        motor2.run(RELEASE);
        motor3.run(RELEASE);
        // Serial.println("Left");
        // delay(10);
      }
    }
}

