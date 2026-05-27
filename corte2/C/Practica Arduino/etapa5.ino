const int PIN_POTENCIOMETRO = A0;
const int CANTIDAD_LECTURAS = 10;
const int PAUSA_ENTRE_LECTURAS_MS = 20;

void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs) {
  if (datos == nullptr || cantidad <= 0) return;

  for (int i = 0; i < cantidad; i++) {
    datos[i] = analogRead(pin);
    delay(pausaMs);
  }
}

void analizarLecturas(int datos[], int cantidad,
                      int *promedio,
                      int *minimo,
                      int *maximo) {

  if (datos == nullptr || promedio == nullptr || minimo == nullptr || maximo == nullptr || cantidad <= 0) {
    return;
  }

  long suma = 0;

  *minimo = datos[0];
  *maximo = datos[0];

  for (int i = 0; i < cantidad; i++) {
    suma += datos[i];

    if (datos[i] < *minimo) *minimo = datos[i];
    if (datos[i] > *maximo) *maximo = datos[i];
  }

  *promedio = (int)(suma / cantidad);
}

void mostrarArreglo(int datos[], int cantidad) {
  if (datos == nullptr || cantidad <= 0) return;

  Serial.print("Lecturas:");

  for (int i = 0; i < cantidad; i++) {
    Serial.print(datos[i]);
    Serial.print(" ");
  }

  Serial.println();
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lecturas[CANTIDAD_LECTURAS];

  int promedio = 0;
  int minimo = 0;
  int maximo = 0;

  tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS, PAUSA_ENTRE_LECTURAS_MS);
  analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);

  mostrarArreglo(lecturas, CANTIDAD_LECTURAS);

  Serial.print("Promedio=");
  Serial.println(promedio);

  Serial.print("Minimo=");
  Serial.println(minimo);

  Serial.print("Maximo=");
  Serial.println(maximo);

  Serial.println("------------------------------");

  delay(1000);
}
