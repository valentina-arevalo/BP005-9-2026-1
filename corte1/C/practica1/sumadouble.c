#include <stdio.h>

int main() {
    double num1, num2, suma;

  
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1); // %lf se usa para double

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);

  
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %.f y %.f es: %.f\n", num1, num2, suma);

    return 0;
}
