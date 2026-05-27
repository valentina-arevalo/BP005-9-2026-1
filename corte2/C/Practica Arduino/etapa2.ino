const int PIN_POTENCIOMETRO = A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;

int leerADC(int pin) {
  return analogRead(pin);
}

float calcularVoltaje(int valorADC) {
  return (valorADC * VREF) / ADC_MAX;
}

int calcularPorcentaje(int valorADC) {
  return (int)((long)valorADC * 100L / ADC_MAX);
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
  int valorADC = leerADC(PIN_POTENCIOMETRO);
  float voltaje = calcularVoltaje(valorADC);
  int porcentaje = calcularPorcentaje(valorADC);

  mostrarDatos(valorADC, voltaje, porcentaje);

  delay(500);
}
