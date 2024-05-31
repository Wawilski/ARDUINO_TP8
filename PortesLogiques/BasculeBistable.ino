void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(2)==HIGH){}
  digitalWrite(13,HIGH);
  while(digitalRead(3) == HIGH){
    }
  digitalWrite(13, LOW);
}



