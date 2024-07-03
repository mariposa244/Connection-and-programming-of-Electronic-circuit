// C++ code

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {
    servo1.attach(3);
    servo2.attach(4);
    servo3.attach(5);
    servo4.attach(6);
    servo5.attach(7);
    servo6.attach(8);
}

void loop() {
    // Move 90 degrees
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo5.write(90);
    servo6.write(90);
    delay(1000);

    // Move to 0 degrees
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
    servo5.write(0);
    servo6.write(0);
    delay(1000);
}