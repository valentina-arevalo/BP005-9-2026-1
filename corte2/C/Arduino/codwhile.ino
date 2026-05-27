 const int LED_PIN = 2;

 void setup() {
  pinMode(LED_PIN, OUTPUT); 
 }

 void loop() {
  int contador = 1; 

  while (contador <= 5) {
   digitalWrite(LED_PIN, HIGH); 
   delay(250); 

   digitalWrite(LED_PIN, LOW); 
   delay(250); 

   contador++; 
 }

 delay(1500); 
 }
