const int PIN_POTENCIOMETRO = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorADC = analogRead(PIN_POTENCIOMETRO);

  Serial.print("ADC = ");
  Serial.println(valorADC);

  delay(500);
}
