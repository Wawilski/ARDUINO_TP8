const int VoltPin = 2;
float V = 0.00;

void calculateV(){
  float R1 = 9800.00;

  float v_ref = 5.00;
  float resistorR = 0.00;
  float adc_val = 0.00;
  float voltage = 0.00;
  resistorR = (R1/(2*R1));
  for (int i=0 ;i< 20; i++)
  {
    adc_val = adc_val + analogRead(VoltPin);
    delay(5);
    }
    adc_val = adc_val/20;
    voltage = (adc_val*v_ref)/1024;
    Serial.println(voltage);
    V = voltage / resistorR;
}




void setup() {
 
    Serial.begin(9600);

}

void loop() {
  calculateV();
  Serial.print(V);
  Serial.println("V");
    
  delay(2000);

}
