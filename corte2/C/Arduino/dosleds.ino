 const int LED1 = 4; 
 const int LED2 = 8; 

 void setup() {
 pinMode(LED1, OUTPUT); 
 pinMode(LED2, OUTPUT); 
 }

 void loop() {
 digitalWrite(LED1, HIGH); 
 digitalWrite(LED2, LOW); 
 delay(400); 

 digitalWrite(LED1, LOW); 
 digitalWrite(LED2, HIGH); 
 delay(400); 
 }
