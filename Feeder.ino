#include <Servo.h>
#define DATAIN 0
Servo servo1; //define object

void setup()
{
  servo1.attach(5); //connect pin5 to servo1
}

void loop()
{
  servo1.write(105);
  delay(1000);
  servo1.write(-105); //write 45 degree to servo
  delay(10000);

}
