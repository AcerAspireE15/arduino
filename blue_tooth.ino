int state = 0;
void setup(){
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Serial.begin(38400);
  
}

void loop(){
  
  if(Serial.available() > 0)
  {
    state=Serial.read();}
    
    if(state == '0')
    {
      digitalWrite(13, LOW);
      Serial.println("LED : OFF");
      state=0;
    }
    else if( state == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println("LED : ON");
      state=0;
    }}
