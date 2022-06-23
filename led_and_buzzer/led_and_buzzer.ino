int led=9;
int buzzer=11;
int button=5;
int buttonstate;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  digitalWrite(buzzer,LOW);
  buttonstate=digitalRead(button);
  switch(buttonstate)
  {
    case HIGH:
    
      digitalWrite(buzzer,LOW);
      digitalWrite(led,LOW);
      break;
      
    case LOW:
    
      digitalWrite(buzzer,HIGH);
      digitalWrite(led,HIGH);
      break;
  }
}
