const int PIN_POT_ANALOGICO = A2;
const int SIZE_REGISTRO = 12; 
const int DELAY_REGISTRO_MS = 20;

void llenarHistorial(int pin, int bufer[], int longitud, int retardoMs) {
    if (bufer == nullptr || longitud <= 0) return;
    for (int k = 0; k < longitud; k++) {
        bufer[k] = analogRead(pin);
        delay(retardoMs);
    }
}

void analizarHistorial(int bufer[], int longitud, int *valMedia, int *valMin, int *valMax) {
    if (bufer == nullptr || valMedia == nullptr || valMin == nullptr || valMax == nullptr || longitud <= 0) {
        return;
    }
    long sumatoria = 0;
    *valMin = bufer[0];
    *valMax = bufer[0];

    for (int k = 0; k < longitud; k++) {
        sumatoria = sumatoria + bufer[k];
        if (bufer[k] < *valMin) *valMin = bufer[k];
        if (bufer[k] > *valMax) *valMax = bufer[k];
    }
    *valMedia = (int)(sumatoria / longitud);
}

void imprimirMuestrasArreglo(int bufer[], int longitud) {
    if (bufer == nullptr || longitud <= 0) return;
    Serial.print("Datos en Buffer: ");
    for (int k = 0; k < longitud; k++) {
        Serial.print(bufer[k]);
        Serial.print(" -> ");
    }
    Serial.println("FIN");
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    int historialLecturas[SIZE_REGISTRO];
    int media = 0, minimo = 0, maximo = 0;

    llenarHistorial(PIN_POT_ANALOGICO, historialLecturas, SIZE_REGISTRO, DELAY_REGISTRO_MS);
    analizarHistorial(historialLecturas, SIZE_REGISTRO, &media, &minimo, &maximo);
    imprimirMuestrasArreglo(historialLecturas, SIZE_REGISTRO);

    Serial.print("Media aritmetica = ");  Serial.println(media);
    Serial.print("Minimo registrado = "); Serial.println(minimo);
    Serial.print("Maximo registrado = "); Serial.println(maximo);

    delay(1000);
}
