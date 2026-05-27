 const int LED1 = 4; 
 const int LED2 = 8; 

 void setup() {
 pinMode(LED1, OUTPUT); 
 pinMode(LED2, OUTPUT); 
 }

 void loop() {
 for (int i = 1; i <= 3; i++) { 
 digitalWrite(LED1, HIGH); 
 digitalWrite(LED2, LOW); 
 delay(300); 
 digitalWrite(LED1, LOW); 
 digitalWrite(LED2, HIGH); 
 delay(300); 
 }
 digitalWrite(LED1, LOW); 
 digitalWrite(LED2, LOW); 
 delay(1000); 
 }
