#include<Servo.h>
int trigPin=9;
int echoPin=10;
int buzzer=2;
int pos=0;

Servo myservo;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  myservo.attach(11);
}

int calcdist()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  int duration=pulseIn(echoPin,HIGH);
  int distance=duration*0.34/2;
  return distance;
}

void beeponce()
{
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
}

void objDetect()
{
  int distance=calcdist();
  if(distance<=30)
  {
    beeponce();
    beeponce();
  }
  else if(distance<=60)
    beeponce();
}

void loop()
{
  for(pos=0;pos<=180;pos++)
  {
    myservo.write(pos);
    delay(15);
    objDetect();
  }
  for(pos=180;pos>=0;pos--)
  {
    myservo.write(pos);
    delay(15);
    objDetect();
  }
}
