char data=0;
void setup()
{
 pinMode(11, OUTPUT);
 Serial.begin(9600);
 pinMode(10, OUTPUT);
 Serial.begin(9600);
}

void loop(){
  if(Serial.available() > 0);
  {
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1')
 
   digitalWrite(11, HIGH);
  else if(data=='0')
  digitalWrite(11, LOW);
  }
   if(Serial.available() > 0);
  {
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1')
 
   digitalWrite(10, HIGH);
  else if(data=='0')
  digitalWrite(10, LOW);
}
}
