const int PIN_POT_ANALOGICO = A2;
const int LIMIT_ADC = 1023;
const float VOLTS_REF = 5.0;

void procesarEntradaAnalogica(int pin, int *registroADC, float *medicionVoltios, int *calculoPorcentaje) {
    if (registroADC == nullptr || medicionVoltios == nullptr || calculoPorcentaje == nullptr) {
        return;
    }
    *registroADC = analogRead(pin);
    *medicionVoltios = (*registroADC * VOLTS_REF) / LIMIT_ADC;
    *calculoPorcentaje = (int)((long)(*registroADC) * 100L / LIMIT_ADC);
}

void mostrarReporteConsola(int registroADC, float medicionVoltios, int calculoPorcentaje) {
    Serial.print("RegADC: ");
    Serial.print(registroADC);
    Serial.print(" -> Tension: ");
    Serial.print(medicionVoltios, 2);
    Serial.print(" V | Prc: ");
    Serial.print(calculoPorcentaje);
    Serial.println(" %");
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    int registroADC = 0;
    float medicionVoltios = 0.0;
    int calculoPorcentaje = 0;

    procesarEntradaAnalogica(PIN_POT_ANALOGICO, &registroADC, &medicionVoltios, &calculoPorcentaje);
    mostrarReporteConsola(registroADC, medicionVoltios, calculoPorcentaje);

    delay(500);
}
