int button=5;
int led=9;
int buttonstate;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  buttonstate=digitalRead(button);
  if(buttonstate==HIGH)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}
