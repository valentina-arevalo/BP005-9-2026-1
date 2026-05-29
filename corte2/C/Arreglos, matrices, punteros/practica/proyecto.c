#include <stdio.h>
#include <stdlib.h>

void leerArreglo(int *datos, int n) {

    int i;

    for (i = 0; i < n; i++) {

        printf("Ingrese datos[%d]: ", i);

        scanf("%d", &datos[i]);
    }
}

void mostrarArreglo(int *datos, int n) {

    int i;

    for (i = 0; i < n; i++) {

        printf("%d ", datos[i]);
    }

    printf("\n");
}

int sumarArreglo(int *datos, int n) {

    int suma = 0;

    int i;

    for (i = 0; i < n; i++) {

        suma = suma + datos[i];
    }

    return suma;
}

void leerMatriz(int *m,
                int filas,
                int columnas) {

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            printf("m[%d][%d]: ",
                   i,
                   j);

            scanf("%d",
                  &m[i * columnas + j]);
        }
    }
}

void mostrarMatriz(int *m,
                   int filas,
                   int columnas) {

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            printf("%d ",
                   m[i * columnas + j]);
        }

        printf("\n");
    }
}

int sumarMatriz(int *m,
                int filas,
                int columnas) {

    int suma = 0;

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            suma =
            suma + m[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    int n = 5;

    int *datos =
    malloc(n * sizeof(int));

    int filas = 2;
    int columnas = 3;

    int *m =
    malloc(filas * columnas *
           sizeof(int));

    if (datos == NULL || m == NULL) {

        printf("Error de memoria.\n");

        return 1;
    }

    printf("=== ARREGLO ===\n");

    leerArreglo(datos, n);

    mostrarArreglo(datos, n);

    printf("Suma arreglo = %d\n",
           sumarArreglo(datos, n));

    printf("\n=== MATRIZ ===\n");

    leerMatriz(m, filas, columnas);

    mostrarMatriz(m, filas, columnas);

    printf("Suma matriz = %d\n",
           sumarMatriz(m,
                       filas,
                       columnas));

    free(datos);

    free(m);

    datos = NULL;

    m = NULL;

    return 0;
}
