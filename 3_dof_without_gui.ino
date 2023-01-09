/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo base;
Servo link1;
Servo link2;
Servo grip_on;
Servo grip_off;


int bpos = 90; 
int l1pos = 90; // variable to store the servo position
int l2pos = 90;
int gnpos = 0;
int gfpos = 0;
void setup() {
  Serial.begin(9600);
  base.attach(6);
   link1.attach(7);// attaches the servo on pin 9 to the servo object
 link2.attach(5);
  grip_on.attach(3);// attaches the servo on pin 9 to the servo object
 grip_off.attach(4);
}

void loop() {
delay(3000);
  for (l1pos = 90; l1pos >= 45; l1pos -= 1) { // goes from 180 degrees to 0 degrees
    link1.write(l1pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
delay(1000);
Serial.println("Start");
    for (l2pos = 90; l2pos <= 140; l2pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    link2.write(l2pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
      for (gnpos = 0; gnpos <= 180; gnpos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    grip_on.write(gnpos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }  
  delay(1000);
    for (l2pos = 140; l2pos >= 90; l2pos -= 1) { // goes from 180 degrees to 0 degrees
    link2.write(l2pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
  


    for (l1pos = 45; l1pos <= 90; l1pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    link1.write(l1pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }  


  delay(1000);

  
  for (bpos = 90; bpos >= 40; bpos -= 1) { // goes from 180 degrees to 0 degrees
    base.write(bpos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }


  delay(2000);

   for (l1pos = 90; l1pos >= 45; l1pos -= 1) { // goes from 180 degrees to 0 degrees
    link1.write(l1pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
delay(1000);
Serial.println("Start");
    for (l2pos = 90; l2pos <= 140; l2pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    link2.write(l2pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
        for (gfpos = 0; gfpos <= 180; gfpos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    grip_off.write(gfpos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }  
        for (gnpos = 180; gnpos >= 0; gnpos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    grip_on.write(gnpos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }  
        for (gfpos = 180; gfpos >= 0; gfpos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    grip_off.write(gfpos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }  
  delay(1000);
    for (l2pos = 140; l2pos >= 90; l2pos -= 1) { // goes from 180 degrees to 0 degrees
    link2.write(l2pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }



    for (l1pos = 45; l1pos <= 90; l1pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    link1.write(l1pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }  delay(1000);
    for (bpos = 40; bpos <= 90; bpos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    base.write(bpos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }



  
}
