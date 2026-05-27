const int PIN_POT_ANALOGICO = A2;  
const int PIN_LED_PWM = 10;      
const int LIMIT_ADC = 1023;     
const int LIMIT_PWM = 255;       
const float VOLTS_REF = 5.0;     
const int SIZE_REGISTRO = 12;      
const int DELAY_REGISTRO_MS = 20;
const int RETARDO_BUCLE_MS = 1000;
const int RANGO_UMBRAL = 50;

void llenarHistorial(int pin, int bufer[], int longitud, int retardoMs) {
    if (bufer == nullptr || longitud <= 0) return;
    for (int i = 0; i < longitud; i++) {
        bufer[i] = analogRead(pin);
        delay(retardoMs);
    }
}

void analizarHistorial(int bufer[], int longitud, int *valMedia, int *valMin, int *valMax) {
    if (bufer == nullptr || valMedia == nullptr || valMin == nullptr || valMax == nullptr || longitud <= 0) return;
    long sumatoria = 0;
    *valMin = bufer[0];
    *valMax = bufer[0];
    for (int i = 0; i < longitud; i++) {
        sumatoria = sumatoria + bufer[i];
        if (bufer[i] < *valMin) *valMin = bufer[i];
        if (bufer[i] > *valMax) *valMax = bufer[i];
    }
    *valMedia = (int)(sumatoria / longitud);
}

void ajustarEscalaPromedio(int valMedia, float *voltaje, int *porcentaje, int *intensidad) {
    if (voltaje == nullptr || porcentaje == nullptr || intensidad == nullptr) return;
    *voltaje = (valMedia * VOLTS_REF) / LIMIT_ADC;
    *porcentaje = (int)((long)valMedia * 100L / LIMIT_ADC);
    *intensidad = (int)((long)valMedia * LIMIT_PWM / LIMIT_ADC);
}

void evaluarCondicionLED(int porcentaje, int limite, int *registroEstado) {
    if (registroEstado == nullptr) return;
    if (porcentaje >= limite) {
        *registroEstado = HIGH;
    } else {
        *registroEstado = LOW;
    }
}

void comandarSalidaCompleta(int pinTarget, int estadoLogico, int intensidad) {
    if (estadoLogico == LOW) {
        analogWrite(pinTarget, 0);
    } else {
        analogWrite(pinTarget, intensidad);
    }
}

void imprimirMuestrasArreglo(int bufer[], int longitud) {
    if (bufer == nullptr || longitud <= 0) return;
    Serial.print("Muestras Capturadas: ");
    for (int i = 0; i < longitud; i++) {
        Serial.print(bufer[i]);
        Serial.print(" ");
    }
    Serial.println();
}

void generarDiagnosticoSerial(int med, int min, int max, float v, int pct, int duty, int estadoLogico) {
    Serial.print(">> PROMEDIO ARITMETICO: "); Serial.println(med);
    Serial.print(">> MINI LECTURA: ");      Serial.println(min);
    Serial.print(">> MAXI LECTURA: ");      Serial.println(max);
    Serial.print(">> VOLTAJE CALCULADO: ");  Serial.print(v, 2); Serial.println(" v");
    Serial.print(">> PORCENTAJE TOTAL: ");   Serial.print(pct); Serial.println(" %");
    Serial.print(">> INTENSIDAD PWM: ");     Serial.println(duty);
    Serial.print(">> ESTADO DIODO LED: ");
    if (estadoLogico == HIGH) {
        Serial.println("[ENCENDIDO / COMPLETO]");
    } else {
        Serial.println("[APAGADO / SEGURO]");
    }
    Serial.println("**************************************************");
}

void setup() {
    Serial.begin(9600);
    pinMode(PIN_LED_PWM, OUTPUT);
}

void loop() {
    int historialLecturas[SIZE_REGISTRO];
    int media = 0, minimo = 0, maximo = 0;
    float tension = 0.0;
    int porcentaje = 0, intensidad = 0;
    int estadoLogico = LOW;

    llenarHistorial(PIN_POT_ANALOGICO, historialLecturas, SIZE_REGISTRO, DELAY_REGISTRO_MS);
    analizarHistorial(historialLecturas, SIZE_REGISTRO, &media, &minimo, &maximo);
    ajustarEscalaPromedio(media, &tension, &porcentaje, &intensidad);
    evaluarCondicionLED(porcentaje, RANGO_UMBRAL, &estadoLogico);
    comandarSalidaCompleta(PIN_LED_PWM, estadoLogico, intensidad);
    imprimirMuestrasArreglo(historialLecturas, SIZE_REGISTRO);
    generarDiagnosticoSerial(media, minimo, maximo, tension, porcentaje, intensidad, estadoLogico);

    delay(RETARDO_BUCLE_MS);
}
