const int PIN_POT_ANALOGICO = A2;
const int PIN_LED_PWM = 10;
const int LIMIT_ADC = 1023;
const float VOLTS_REF = 5.0;
const int RANGO_UMBRAL = 50;

void procesarEntradaAnalogica(int pin, int *registroADC, float *medicionVoltios, int *calculoPorcentaje) {
    if (registroADC == nullptr || medicionVoltios == nullptr || calculoPorcentaje == nullptr) return;
    *registroADC = analogRead(pin);
    *medicionVoltios = (*registroADC * VOLTS_REF) / LIMIT_ADC;
    *calculoPorcentaje = (int)((long)(*registroADC) * 100L / LIMIT_ADC);
}

void calcularAccionLED(int calculoPorcentaje, int limite, int *registroEstado) {
    if (registroEstado == nullptr) return;
    if (calculoPorcentaje >= limite) {
        *registroEstado = HIGH;
    } else {
        *registroEstado = LOW;
    }
}

void ejecutarSalidaLED(int pinLED, int estado) {
    digitalWrite(pinLED, estado);
}

void mostrarReporteConsola(int registroADC, float medicionVoltios, int calculoPorcentaje, int estado) {
    Serial.print("RegADC = ");
    Serial.print(registroADC);
    Serial.print(" | Volts = ");
    Serial.print(medicionVoltios, 2);
    Serial.print("V | Nivel = ");
    Serial.print(calculoPorcentaje);
    Serial.print("% | Diodo = ");
    if (estado == HIGH) {
        Serial.println("[ACTIVO]");
    } else {
        Serial.println("[INACTIVO]");
    }
}

void setup() {
    Serial.begin(9600);
    pinMode(PIN_LED_PWM, OUTPUT);
}

void loop() {
    int registroADC = 0;
    float medicionVoltios = 0.0;
    int calculoPorcentaje = 0;
    int estadoDiodo = LOW;

    procesarEntradaAnalogica(PIN_POT_ANALOGICO, &registroADC, &medicionVoltios, &calculoPorcentaje);
    calcularAccionLED(calculoPorcentaje, RANGO_UMBRAL, &estadoDiodo);
    ejecutarSalidaLED(PIN_LED_PWM, estadoDiodo);
    mostrarReporteConsola(registroADC, medicionVoltios, calculoPorcentaje, estadoDiodo);

    delay(500);
}
