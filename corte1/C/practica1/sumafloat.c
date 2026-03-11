#include <stdio.h>

int main() {
    float num1, num2, suma;

 
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

  
    suma = num1 + num2;

 
    printf("La suma de %.f y %.f es: %.f\n", num1, num2, suma);

    return 0;
}
