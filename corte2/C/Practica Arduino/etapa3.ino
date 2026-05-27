const int PIN_POTENCIOMETRO = A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;

void leerPotenciometro(int pin, int *valorADC, float *voltaje, int *porcentaje) {
  if (valorADC == nullptr || voltaje == nullptr || porcentaje == nullptr) {
    return;
  }

  *valorADC = analogRead(pin);
  *voltaje = (*valorADC * VREF) / ADC_MAX;
  *porcentaje = (int)((long)(*valorADC) * 100L / ADC_MAX);
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje) {
  Serial.print("ADC=");
  Serial.print(valorADC);
  Serial.print("|Voltaje=");
  Serial.print(voltaje, 2);
  Serial.print("V");
  Serial.print("|Porcentaje=");
  Serial.print(porcentaje);
  Serial.println(" %");
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorADC = 0;
  float voltaje = 0.0;
  int porcentaje = 0;

  leerPotenciometro(PIN_POTENCIOMETRO, &valorADC, &voltaje, &porcentaje);

  mostrarDatos(valorADC, voltaje, porcentaje);

  delay(500);
}
