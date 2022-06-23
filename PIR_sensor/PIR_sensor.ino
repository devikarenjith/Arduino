int sensor=2;
int buzzer=12;
int led=8;

void setup()
{
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  int sensorval=digitalRead(sensor);
  if(sensorval==HIGH)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }
}
