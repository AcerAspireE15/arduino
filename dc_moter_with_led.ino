void setup(){
  
  pinMode(13, OUTPUT);
  
  pinMode(8, OUTPUT);
  
}

void loop(){
  
  digitalWrite(13, HIGH);
  delay(1000);
  
  digitalWrite(13, LOW);
  delay(1000);
  
  digitalWrite(8, HIGH);
  delay(1000);
  
  digitalWrite(8, LOW);
  delay(1000);
}
