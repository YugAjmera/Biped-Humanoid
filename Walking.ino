#include <Servo.h>

Servo s5,s6,s7,s8; 
Servo s1,s2,s3,s4;          // creates object to control the servo
int j=0;

void setup() {
  // put your setup code here, to run once:
  s1.attach(8);
  s2.attach(9);
  s3.attach(10);
  s4.attach(11);
  
  s5.attach(6);
  s6.attach(5);
  s7.attach(4);
  s8.attach(3);

 
}

void loop() {
  // put your main code here, to run repeatedly:

  if(j==0)  stable();   delay(100);

  
  for(int i=90;i<=110;i++)
  {
    s4.write(i);
    delay(100);
  }

  for(int i=90;i<=105;i++)
  {
    s5.write(i);
    delay(100);
  }
  
 
  for(int i=110;i>=80;i--)
  {
    s4.write(i);
    delay(100);
  }

  for(int i=117;i<=130;i++)
  {
    s8.write(i);
    delay(100);
  }


  for(int i=87;i<=105;i++)
  {
    s1.write(i);
    delay(100);
  }

   for(int i=105;i>=90;i--)
  {
    s1.write(i); s5.write(i);
    delay(100);
  }

  
  for(int i=95;i<=100;i++)
  {
    s2.write(i);
    delay(100);
  }
  
  for(int i=80;i<=90;i++)
  {
    s4.write(i);
    delay(100);
  }

  for(int i=130;i>=110;i--)
  {
      s8.write(i);
      delay(100);
  }

  
  
j++;
}
 


void stable()
{
   s1.write(87);    s5.write(90);
   s2.write(95);     s6.write(90);
   s3.write(90);     s7.write(67);
   s4.write(90);     s8.write(117);
  
}
 

