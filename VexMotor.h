/*
  VexMotor.h - Library for using VexMotors with Arduino
  Created by Michael Latman on March 9th, 2014.
  Released into the public domain.
*/
#ifndef VexMotor_H
#define VexMotor_H

#include "Arduino.h"
#include "Servo.h"
class VexMotor
{
  public:
    VexMotor(int pin);
    void set(int speed);
  private:
    int _pin;
    Servo myservo;
};

#endif
