#include <Servo.h>

Servo myServo;

int const potPin = 0;
int potVal = 0;
int angle;

void setup() {
  myServo.attach(9);

  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("potval: ");
  Serial.print(potVal);
  
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.print(angle);
  delay(250);
  
  myServo.write(angle);
  delay(15);
}
