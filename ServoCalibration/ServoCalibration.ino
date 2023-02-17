#include <Servo.h>

int led = 13;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(led, INPUT);
  digitalWrite(led, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(5000);
  digitalWrite(led, LOW);
  myServo.write(0);
  for (int i = 0; i <= 90; i += 5) {
    myServo.write(i);
    delay(250);
  }
}