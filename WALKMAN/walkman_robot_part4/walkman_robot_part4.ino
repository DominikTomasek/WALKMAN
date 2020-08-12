 //walkman bude mit v sobe cidlo pridane
//pokud cidlo zanznamena prekazku zastavi se doufam 
// funguje 


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

//ledky
int red=3;
int green=5;
int blue=6;

void setup() {
  Serial.begin(9600);
   servo1.attach (8);
   servo2.attach (9);
   servo3.attach (10);
   servo4.attach (11);
   pinMode(13,INPUT);
   pinMode(red,OUTPUT);
   pinMode(green,OUTPUT);
   pinMode(blue,OUTPUT);
  
}

void loop() {
  int detect=digitalRead(13);
  if (detect == HIGH){
  Serial.println ("ČISTO");
  
 servo1.write(middle);
 servo2.write(middle);
 servo3.write (middle);
 servo4.write (middle);
 delay(stepdelay);

 servo1.write(middle + endPoint);
 delay(stepdelay);
 servo3.write(middle-endPoint);
 delay(stepdelay);
 servo2.write(middle+ endPoint);
 delay(stepdelay);
 servo4.write(middle- endPoint);
 delay (stepdelay);
 
 digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
   digitalWrite(blue,LOW);
 
 }
 else{
  Serial.println ("PŘEKÁŽKA");
   servo1.write(middle);
 servo2.write(middle);
 servo3.write (middle);
 servo4.write (middle);
 delay(stepdelay);
 digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
   digitalWrite(blue,LOW);
 }
delay(300);
 
 }
