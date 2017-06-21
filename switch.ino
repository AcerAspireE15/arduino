

int buttonState=0;

void setup(){
  
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
  
}

void loop(){
  
  buttonState = digitalRead(8);
  if(buttonState == HIGH){
    
  digitalWrite(13, HIGH);
}
else{
  digitalWrite(13, LOW);
  
}
}
