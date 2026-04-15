#include <stdio.h>

 int main() {
 int numero = 7; // Numero del que se desea la tabla
 int i; // Contador

 for (i = 1; i <= 10; i++) {
 printf(" %d x %d = %d\n", numero, i, numero * i);
 }

 return 0;
 }
