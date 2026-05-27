#include <stdio.h>
#include <stdlib.h> 

void leerArreglo(int *datos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Arreglo [%d]: ", i);
        scanf("%d", &datos[i]);
    }
}

void mostrarArreglo(int *datos, int n) {
    int i;
    printf("Arreglo guardado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n");
}

void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    int i;
    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    for (i = 0; i < n; i++) {
        *suma += datos[i];
        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }
        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

void leerMatriz(int *matriz, int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * columnas + j]);
        }
    }
}

void mostrarMatriz(int *matriz, int filas, int columnas) {
    int i, j;
    printf("Matriz guardada:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i * columnas + j]);
        }
        printf("\n");
    }
}

int sumarMatriz(int *matriz, int filas, int columnas) {
    int i, j;
    int suma = 0;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            suma += matriz[i * columnas + j];
        }
    }
    return suma;
}

int main() {
    int n_arreglo;
    int *arregloDinamico = NULL;
    int sumaArr, mayorArr, menorArr;
    int f_matriz, c_matriz;
    int *matrizDinamica = NULL;
    int sumaMat;
    printf("        PROYECTO INTEGRADOR: MEMORIA DINAMICA     \n");
  
    printf("--- Bloque 1: Arreglo Dinamico ---\n");
    printf("¿Cuantos elementos desea asignar al arreglo?: ");
    scanf("%d", &n_arreglo);

    arregloDinamico = (int *)malloc(n_arreglo * sizeof(int));
    if (arregloDinamico == NULL) {
        printf("Error: No se pudo asignar memoria para el arreglo.\n");
        return 1; 
    }

    leerArreglo(arregloDinamico, n_arreglo);
    printf("\n");
    mostrarArreglo(arregloDinamico, n_arreglo);
    analizarArreglo(arregloDinamico, n_arreglo, &sumaArr, &mayorArr, &menorArr);

    printf("\nReporte del Arreglo:\n");
    printf("-> Suma de elementos: %d\n", sumaArr);
    printf("-> Elemento mayor: %d\n", mayorArr);
    printf("-> Elemento menor: %d\n\n", menorArr);

    printf("--- Bloque 2: Matriz Dinamica Lineal ---\n");
    printf("Ingrese numero de filas: ");
    scanf("%d", &f_matriz);
    printf("Ingrese numero de columnas: ");
    scanf("%d", &c_matriz);

    matrizDinamica = (int *)malloc(f_matriz * c_matriz * sizeof(int));
    if (matrizDinamica == NULL) {
        printf("Error: No se pudo asignar memoria para la matriz.\n");
        free(arregloDinamico); 
        return 1;
    }

    leerMatriz(matrizDinamica, f_matriz, c_matriz);
    printf("\n");
    mostrarMatriz(matrizDinamica, f_matriz, c_matriz);
    sumaMat = sumarMatriz(matrizDinamica, f_matriz, c_matriz);

    printf("\nReporte de la Matriz:\n");
    printf("-> Suma total de celdas: %d\n\n", sumaMat);

    printf("Liberando memoria asignada dinamicamente...\n");
    
    free(arregloDinamico);
    arregloDinamico = NULL;
    
    free(matrizDinamica);
    matrizDinamica = NULL;

    printf("Programa finalizado con exito.\n");
    return 0;
}
