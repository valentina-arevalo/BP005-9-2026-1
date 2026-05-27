const int PIN_POTENCIOMETRO = A0;
const int PIN_LED = 9;
const int ADC_MAX = 1023;
const float VREF = 5.0;
const int UMBRAL_LED = 50;

void leerPotenciometro(int pin, int *valorADC, float *voltaje, int *porcentaje) {
  if (valorADC == nullptr || voltaje == nullptr || porcentaje == nullptr) {
    return;
  }

  *valorADC = analogRead(pin);
  *voltaje = (*valorADC * VREF) / ADC_MAX;
  *porcentaje = (int)((long)(*valorADC) * 100L / ADC_MAX);
}

void decidirEstadoLED(int porcentaje, int umbral, int *estadoLED) {
  if (estadoLED == nullptr) return;

  if (porcentaje >= umbral) {
    *estadoLED = HIGH;
  } else {
    *estadoLED = LOW;
  }
}

void aplicarEstadoLED(int pinLED, int estadoLED) {
  digitalWrite(pinLED, estadoLED);
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje, int estadoLED) {
  Serial.print("ADC=");
  Serial.print(valorADC);
  Serial.print("|Voltaje=");
  Serial.print(voltaje, 2);
  Serial.print("V");
  Serial.print("|Porcentaje=");
  Serial.print(porcentaje);
  Serial.print("%");
  Serial.print("|LED=");

  if (estadoLED == HIGH) {
    Serial.println("ENCENDIDO");
  } else {
    Serial.println("APAGADO");
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int valorADC = 0;
  float voltaje = 0.0;
  int porcentaje = 0;
  int estadoLED = LOW;

  leerPotenciometro(PIN_POTENCIOMETRO, &valorADC, &voltaje, &porcentaje);
  decidirEstadoLED(porcentaje, UMBRAL_LED, &estadoLED);
  aplicarEstadoLED(PIN_LED, estadoLED);

  mostrarDatos(valorADC, voltaje, porcentaje, estadoLED);

  delay(500);
}
