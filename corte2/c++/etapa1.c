const int PIN_POT = A2; 

void setup() {
    Serial.begin(9600);
}

void loop() {
    int canalLectura = analogRead(PIN_POT);

    Serial.print("LECTURA RAW: ");
    Serial.println(canalLectura);

    delay(500);
}
