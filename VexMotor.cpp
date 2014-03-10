/*
  VexMotor.cpp - Library for using VexMotors with Arduino
  Created by Michael Latman on March 9th, 2014.
  Released into the public domain.
*/

#include "Arduino.h"
#include "VexMotor.h"
#include "Servo.h"


VexMotor::VexMotor(int pin)
{
  _pin = pin;
}

void VexMotor::set(int speed)
{
   //myservo.attach(_pin);
	//myservo.detach();

	if(!myservo.attached()){
		myservo.attach(_pin);
	}
   if(speed>100) speed=100;
   else if(speed<-100) speed = -100;
   myservo.writeMicroseconds(1500+speed*3); 
}
 