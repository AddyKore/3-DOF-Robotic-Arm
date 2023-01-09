#include <Servo.h>     // importing Servo Library

Servo base;
Servo link1;
Servo link2;
Servo grip_on;
Servo grip_off;


int bpos = 90;                                            // variable to store the servo position for Base(rotation)
int l1pos = 90;                                           // variable to store the servo position for Link 1
int l2pos = 90;                                           // variable to store the servo position for Link 2
int gnpos = 0;                                            // Position variables
int gfpos = 0;
void setup() 
{
  Serial.begin(9600);
  base.attach(6);
  link1.attach(7);                                       // Servo output initialisation
  link2.attach(5);
  grip_on.attach(3);                                     // Pneumatic gripper actuator output initialisation
  grip_off.attach(4);
}

void loop() 
{
delay(3000);
for (l1pos = 90; l1pos >= 45; l1pos -= 1)                // Move Link 1 from 90 to 45 degrees
{                                  
    link1.write(l1pos);                                  // tell servo to go to position in variable 'L1pos'
    delay(50);                                           
}
delay(1000);
 
Serial.println("Start");
 
for (l2pos = 90; l2pos <= 140; l2pos += 1)              // Move Link 2 from 90 to 140 degrees
{ 
    link2.write(l2pos);                                 // tell servo to go to position in variable 'l2pos'
    delay(50);                                          
} 
for (gnpos= 0; gnpos <= 180; gnpos += 1)              
{ 
    grip_on.write(gnpos);                               // turning the solonoid for suction cup ON
    delay(30);                                         
}  
delay(1000);
 
for (l2pos = 140; l2pos >= 90; l2pos -= 1)              // Move Link 2 from 140 to 90 degrees 
{ 
    link2.write(l2pos);                                 // tell servo to go to position in variable 'l2pos'              
    delay(50);                                                            
}
for (l1pos = 45; l1pos <= 90; l1pos += 1)               // Move Link 1 from 90 to 45 degrees
{
    link1.write(l1pos);                                 // tell servo to go to position in variable 'l1pos'
    delay(50);                                          
}  

delay(1000);

for (int bpos = 90; bpos >= 40; bpos -= 1)              // Move base from 90 to 40 degrees
{ 
    base.write(bpos);                                   // tell servo to go to position in variable 'bpos'
    delay(50);                                          

delay(2000);

for (l1pos = 90; l1pos >= 45; l1pos -= 1)              // Move Link 1 from 90 to 45 degrees 
{ 
    link1.write(l1pos);                                 // tell servo to go to position in variable 'l1pos'              
    delay(50);                       
}
delay(1000);
 
Serial.println("Start");
 
for (l2pos = 90; l2pos <= 140; l2pos += 1)              // Move Link 2 from 90 to 140 degrees 
{
    link2.write(l2pos);                                 // tell servo to go to position in variable 'l2pos'              
    delay(50);                       
}
for (gfpos = 0; gfpos <= 180; gfpos += 1) 
{ 
    grip_off.write(gfpos);              
    delay(30);                       
}  
delay(1000);
for (l2pos = 140; l2pos >= 90; l2pos -= 1)               // Move Link 2 from 140 to 90 degrees
{ 
    link2.write(l2pos);                                 // tell servo to go to position in variable 'l2pos'             
    delay(50);                      
}



for (l1pos = 45; l1pos <= 90; l1pos += 1)               // Move Link 1 from 45 to 90 degrees 
{ 
    link1.write(l1pos);                                 // tell servo to go to position in variable 'l1pos'            
    delay(50);                       
}  
 delay(1000);
for (bpos = 40; bpos <= 90; bpos += 1)                 // Move base from 40 to 90 degrees 
{ 
    base.write(bpos);                                  // tell servo to go to position in variable 'bpos'          
    delay(50);                       
}



  
}
