const int LED_PIN = 4; 

 void setup() {
 pinMode(LED_PIN, OUTPUT); 
 Serial.begin(115200); // Inicia la comunicacion serial
 }

 void loop() {
 int n = 3; // Cantidad de parpadeos deseados

 for (int i = 1; i <= n; i++) {
 digitalWrite(LED_PIN, HIGH); 
 delay(250); 

 digitalWrite(LED_PIN, LOW); 
 delay(250);
 }

 Serial.println("Secuencia completada."); // Mensaje de seguimiento
 delay(1500); 
 }
