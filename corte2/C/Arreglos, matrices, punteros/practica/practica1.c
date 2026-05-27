#include <stdio.h>

#define FILAS 2
#define COLUMNAS 3

void mostrarMatrizEstatica(int m[][COLUMNAS], int filas) {
    int i, j;
    printf("Contenido de la matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", m[i][j]); // \t añade un espacio de tabulación
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
}

int sumarMatrizEstatica(int m[][COLUMNAS], int filas) {
    int i, j;
    int suma total = 0;
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            suma_total += m[i][j];
        }
    }
    return suma_total;
}

int main() {
    int miMatriz[FILAS][COLUMNAS] = {
        {5, 12, 7},
        {20, 3, 8}
    };
    int sumaTotal;

    printf("--- PRACTICA 02: MATRIZ ESTATICA ---\n");

    mostrarMatrizEstatica(miMatriz, FILAS);

    sumaTotal = sumarMatrizEstatica(miMatriz, FILAS);
    printf("\nLa suma de todos los elementos de la matriz es: %d\n", sumaTotal);

    return 0;
}
