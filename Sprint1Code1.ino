//Team Redundancy Team

#include <Servo.h> 

#define trig_pin 2
#define echo_pin 3

Servo servoL;  // the left servo from the robot's point of view
Servo servoR;  // the right servo from the robot's point of view

void setup() {
  // servo setup start
  servoL.attach(0);
  servoL.write(90);  // set servo to mid-point

  servoR.attach(1);
  servoR.write(90);  // set servo to mid-point
  // servo setup end

  // ultrasonic setup start
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
  // ultrasonic setup end

}

void loop() {
  // sube sube sube, sube sube.

}