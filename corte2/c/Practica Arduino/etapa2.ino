const int PIN_POT_ANALOGICO = A2;
const int LIMIT_ADC = 1023;     
const float VOLTS_REF = 5.0;   

int capturarPin(int pinHardware) {
    int muestraRaw = analogRead(pinHardware);
    return muestraRaw;
}

float obtenerVoltios(int muestraRaw) {
    float tension = (muestraRaw * VOLTS_REF) / LIMIT_ADC;
    return tension;
}

int obtenerEscalaPrc(int muestraRaw) {
    int porcentajeVal = (int)((long)muestraRaw * 100L / LIMIT_ADC);
    return porcentajeVal;
}

void mostrarReporteConsola(int muestraRaw, float tension, int porcentajeVal) {
    Serial.print("Muestra = ");
    Serial.print(muestraRaw);
    Serial.print(" | Tension = ");
    Serial.print(tension, 2);
    Serial.print("V");
    Serial.print(" | Nivel = ");
    Serial.print(porcentajeVal);
    Serial.println("%");
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    int muestraRaw = capturarPin(PIN_POT_ANALOGICO);
    float tension = obtenerVoltios(muestraRaw);
    int porcentajeVal = obtenerEscalaPrc(muestraRaw);
    
    mostrarReporteConsola(muestraRaw, tension, porcentajeVal);
    
    delay(500);
}
