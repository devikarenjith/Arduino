int buzzer=13;
int led=12;
int trigpin=11;
int echopin=10;
int duration;
int distance;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.34/2;
  
  if(distance<=2)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
    delay(10);
  }
}
