# Connection-and-programming-of-Electronic-circuit
showcase circuit design for connecting 6 servo motors and program them with C++ and showcase movement using simulation via tinkercad 

# the circuit design:
![image](https://github.com/mariposa244/Connection-and-programming-of-Electronic-circuit/assets/138877407/ee528125-81be-44e7-8696-694e9e27584a)
 
# the code description :
the code sets up six servo motors, attaches them to specific pins on the Arduino, and then moves each servo between the 90-degree and 0-degree positions, creating a simple back-and-forth movement. This can be the starting point for more complex servo control applications, such as the 3-servo jointed robot leg described in the last reposotory i will link below 

https://github.com/mariposa244/3D-design-robot-leg/tree/main

as for the code :
```

// raneem mohammed 
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
