int green=9;
int blue=10;
int red=11;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop()
{
    analogWrite(red,0);
    analogWrite(blue,125);
    analogWrite(green,125);
}
