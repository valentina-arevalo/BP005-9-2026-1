#include <stdio.h>

int main() {
    int fila, col;
    int n = 5;
    int ancho = 2*n - 1;

    for(fila = 1; fila <= ancho; fila++) {
        int dist = (fila <= n) ? n - fila : fila - n;

        for(col = 1; col <= ancho; col++) {
            if(col == dist + 1 || col == ancho - dist)
                printf("$");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
