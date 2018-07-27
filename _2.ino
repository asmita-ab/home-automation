const int b=5;
const int touch=8;
const int b1=2;
const int b2=6;
const int b3=4;
const int t1=10;
const int e1=A0;
const int t2=11;
const int e2=A1;
const int t3=12;
const int e3=A2;
const int t4=13;
const int e4=A3;
const int m1=3;
const int m2=7;

long d1,d2,d3,d4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(t1,OUTPUT);
 pinMode(e1,INPUT);
 pinMode(t2,OUTPUT);
 pinMode(e2,INPUT);
 pinMode(t3,OUTPUT);
 pinMode(e3,INPUT);
 pinMode(t4,OUTPUT);
 pinMode(e4,INPUT);
 pinMode(touch,INPUT);
 pinMode(b1,OUTPUT);
 pinMode(b2,OUTPUT);
 pinMode(b3,OUTPUT);
 pinMode(b,INPUT);
 pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
}
void loop() {
 sensorread();
if(d4<7 && digitalRead(touch)!=1)
{
  Serial.println("Intruder");
  while(digitalRead(b)!=1)
  {
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(b3,HIGH);
  delay(500);
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(b3,LOW);
  delay(1000);
  Serial.println("Intruder");
  }
}
else if(digitalRead(touch)==1)
{
if(d1<10)
{
  while(digitalRead(b)!=1)
  {
    digitalWrite(b1,HIGH);
  delay(500);
  digitalWrite(b1,LOW);
  delay(1000);
  Serial.println("1");
  }
  

 digitalWrite(m1,HIGH); 
 digitalWrite(m2,LOW);
delay(300); 
 digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
  digitalWrite(m1,LOW); 
 digitalWrite(m2,HIGH);
delay(300); 
digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
}
  else if(d2<10)
{
 while(digitalRead(b)!=1)
  {
    digitalWrite(b2,HIGH);
  delay(500);
  digitalWrite(b2,LOW);
  delay(1000);
  Serial.println("2");
  }


 digitalWrite(m1,HIGH); 
 digitalWrite(m2,LOW);
delay(300); 
 digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
  digitalWrite(m1,LOW); 
 digitalWrite(m2,HIGH);
delay(300); 
digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
 }
  if(d3<10)
{
  while(digitalRead(b)!=1)
  {
    digitalWrite(b3,HIGH);
  delay(500);
  digitalWrite(b3,LOW);
  delay(1000);
  Serial.println("3");
  }

 digitalWrite(m1,HIGH); 
 digitalWrite(m2,LOW);
delay(300); 
 digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
  digitalWrite(m1,LOW); 
 digitalWrite(m2,HIGH);
delay(300); 
digitalWrite(m1,LOW); 
 digitalWrite(m2,LOW);
 delay(1000);
 }
}}
void sensorread()
{
   digitalWrite(t1, LOW);
  delayMicroseconds(2);
  digitalWrite(t1, HIGH);
  delayMicroseconds(5);
  digitalWrite(t1, LOW);
  d1 = pulseIn(e1, HIGH);
  d1=d1/ 29 / 2;
Serial.print(" d1 = ");
Serial.print(d1);
  digitalWrite(t2, LOW);
  delayMicroseconds(2);
  digitalWrite(t2, HIGH);
  delayMicroseconds(5);
  digitalWrite(t2, LOW);
  d2 = pulseIn(e2, HIGH);
  d2=d2/ 29 / 2;
  Serial.print(" d2 = ");
Serial.print(d2);
digitalWrite(t3, LOW);
  delayMicroseconds(2);
  digitalWrite(t3, HIGH);
  delayMicroseconds(5);
  digitalWrite(t3, LOW);
  d3 = pulseIn(e3, HIGH);
  d3=d3/ 29 / 2;
  Serial.print(" d3 = ");
Serial.println(d3);
digitalWrite(t4, LOW);
  delayMicroseconds(2);
  digitalWrite(t4, HIGH);
  delayMicroseconds(5);
  digitalWrite(t4, LOW);
  d4 = pulseIn(e4, HIGH);
  d4=d4/ 29 / 2;
Serial.print(" d4 = ");
Serial.print(d4);

}
