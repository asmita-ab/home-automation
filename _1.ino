// slave code
#include<SoftwareSerial.h>
SoftwareSerial BTSerial(0,1);
int a;
void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
BTSerial.setTimeout(5);
Serial.setTimeout(5);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}
void loop()
{  
    if (BTSerial.available()>0)
  {
a=BTSerial.read();
Serial.println(a);
switch(a)
{
  case 0: // Happy
  analogWrite(2,255);
   analogWrite(3,255);
    analogWrite(4,255);
     analogWrite(5,255);
      analogWrite(6,255);
       analogWrite(7,255);
       break;
       case 1: // Sad
       analogWrite(2,175);
   analogWrite(3,175);
    analogWrite(4,175);
     analogWrite(5,175);
      analogWrite(6,175);
       analogWrite(7,175);
       break;
       case 2: // Romantic
       analogWrite(2,100);
   analogWrite(3,100);
    analogWrite(4,100);
     analogWrite(5,100);
      analogWrite(6,100);
       analogWrite(7,100);
       break;
       case 3: // Tired
       analogWrite(2,50);
   analogWrite(3,50);
    analogWrite(4,50);
     analogWrite(5,50);
      analogWrite(6,50);
       analogWrite(7,50);
       break;
   }}}
