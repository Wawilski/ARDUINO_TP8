void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,!digitalRead(2) && !digitalread(3));
}



