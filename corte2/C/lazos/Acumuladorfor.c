 #include <stdio.h>

 int main() {
 int i; // Variable de control
 int suma = 0; // Acumulador

 for (i = 1; i <= 10; i++) {
 suma = suma + i; // Acumula el valor actual de i
 }

 printf("La suma es: %d\n", suma);

 return 0;
 }
