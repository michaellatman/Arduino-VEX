Arduino-VEX
=========

VEX-Arduino is a library for interacting with VEX motors/servos using simple commands.

Features
  - Multiple motors!
  - Simple usage (two lines + import)
  - And more!

Easy use:

Place library in Documents -> arduino -> libraries

On mac this is easy:
```bash
cd ~/Documents/Arduino/libraries
git clone git@github.com:mrl4214/Arduino-VEX.git




```cpp
#include <Servo.h>
#include <VexMotor.h>

VexMotor motor1(10); //Use pin 10 for our first vex motor
void setup()
{
   
}

void loop()
{
  motor.set(100); //100 is max. 0 is stop.
  delay(100); //Delay for no real reason.
}
```
