// tenhle program umoznuje chodit walkmanu dozadu , podle meho rozlozeni desky .
// pro chozeni najdi walkman_robot_part3

#include <Servo.h>

// oznaceni pro serva 
Servo servo1; // leve prední- oranzova
Servo servo2; //zadni leve- bila
Servo servo3; //prave predni zluta 
Servo servo4; // zadni prave fialova

// uhly
int middle = 90;
int endPoint = 80;
int stepdelay = 400;


void setup() {
   servo1.attach (8);
   servo2.attach (9);
   servo3.attach (10);
   servo4.attach (11);
}

void loop() {
 servo1.write(middle);
 servo2.write(middle);
 servo3.write (middle);
 servo4.write (middle);
 delay(stepdelay);

 servo1.write(middle - endPoint);
 delay(stepdelay);
 servo3.write(middle+ endPoint);
 delay(stepdelay);
 servo2.write(middle- endPoint);
 delay(stepdelay);
 servo4.write(middle+ endPoint);
 delay (stepdelay);
 
 }
