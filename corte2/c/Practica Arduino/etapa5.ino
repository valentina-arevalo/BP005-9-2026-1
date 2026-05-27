const int PIN_POTENCIOMETRO = A2;
const int PIN_LED = 10;
const int ADC_MAXIMAL = 1023;
const int PWM_MAXIMAL = 255;
const float VREF = 5.0;
const int CANTIDAD_LECTURAS = 10;
const int TIEMPO_ESPERA_MS = 20;

void tomarLecturas(int pin, int arreglo[], int cantidad, int tiempoMs) {
    if (arreglo == nullptr || cantidad <= 0) return;
    for (int i = 0; i < cantidad; i++) {
        arreglo[i] = analogRead(pin);
        delay(tiempoMs);
    }
}

void analizarLecturas(int arreglo[], int cantidad, int *promedio, int *minimo, int *maximo) {
    if (arreglo == nullptr || promedio == nullptr || minimo == nullptr || maximo == nullptr || cantidad <= 0) return;
    long suma = 0;
    *minimo = arreglo[0];
    *maximo = arreglo[0];
    for (int i = 0; i < cantidad; i++) {
        suma = suma + arreglo[i];
        if (arreglo[i] < *minimo) *minimo = arreglo[i];
        if (arreglo[i] > *maximo) *maximo = arreglo[i];
    }
    *promedio = (int)(suma / cantidad);
}

void convertirPromedio(int promedio, float *voltaje, int *porcentaje, int *brillo) {
    if (voltaje == nullptr || porcentaje == nullptr || brillo == nullptr) return;
    *voltaje = (promedio * VREF) / ADC_MAXIMAL;
    *porcentaje = (int)((long)promedio * 100L / ADC_MAXIMAL);
    *brillo = (int)((long)promedio * PWM_MAXIMAL / ADC_MAXIMAL);
}

void aplicarSalidaLED(int pinLED, int brillo) {
    analogWrite(pinLED, brillo); // Escritura nativa PWM
}

void imprimirArreglo(int arreglo[], int cantidad) {
    if (arreglo == nullptr || cantidad <= 0) return;
    Serial.print("Lecturas: ");
    for (int i = 0; i < cantidad; i++) {
        Serial.print(arreglo[i]);
        Serial.print(" ");
    }
    Serial.println();
}

void imprimirReporte(int promedio, int minimo, int maximo, float voltaje, int porcentaje, int brillo) {
    Serial.print("Promedio ADC = "); Serial.println(promedio);
    Serial.print("Minimo ADC = ");   Serial.println(minimo);
    Serial.print("Maximo ADC = ");   Serial.println(maximo);
    Serial.print("Voltaje = ");      Serial.print(voltaje, 2); Serial.println(" V");
    Serial.print("Porcentaje = ");   Serial.print(porcentaje); Serial.println(" %");
    Serial.print("Brillo PWM = ");   Serial.println(brillo);
    Serial.println("----------------------------------------");
}

void setup() {
    Serial.begin(9600);
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    int lecturas[CANTIDAD_LECTURAS];
    int promedio = 0, minimo = 0, maximo = 0;
    float voltaje = 0.0;
    int porcentaje = 0, brillo = 0;

    tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS, TIEMPO_ESPERA_MS);
    analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);
    convertirPromedio(promedio, &voltaje, &porcentaje, &brillo);
    aplicarSalidaLED(PIN_LED, brillo);
    imprimirArreglo(lecturas, CANTIDAD_LECTURAS);
    imprimirReporte(promedio, minimo, maximo, voltaje, porcentaje, brillo);

    delay(1000);
}
