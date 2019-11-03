void setup()
{ for(int i=0;i<4;i++) 
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i=0;i<4;i++)
  {
    
    digitalWrite(i,HIGH);
    delay(300);
    digitalWrite(i,LOW);
  }
}
