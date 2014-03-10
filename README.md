Arduino-VEX
=========

VEX-Arduino is a library for interacting with VEX motors/servos using simple commands.

Features
  - Multiple motors!
  - Simple usage (two lines + import)
  - And more!

Easy use:

Place library in Documents -> arduino -> libraries

```cpp
#include <Servo.h>
#include <VexMotor.h>

VexMotor vex(10); //Use pin 10 for our first vex motor
void setup()
{
   
}

void loop()
{
 vex.set(100); //100 is max. 0 is stop.
  delay(100); //Delay for no real reason.
}
```
