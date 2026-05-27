#include <stdio.h>

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    *suma = a + b + c;

    *mayor = a;

    if (b > *mayor) {
        *mayor = b;
    }

    if (c > *mayor) {
        *mayor = c;
    }

    *menor = a;

    if (b < *menor) {
        *menor = b;
    }

    if (c < *menor) {
        *menor = c;
    }
}

int main() {
    int x = 10;
    int y = 20;
    int z = 5;

    int suma, mayor, menor;

    analizarNumeros(x, y, z, &suma, &mayor, &menor);

    printf("Suma = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    return 0;
}
