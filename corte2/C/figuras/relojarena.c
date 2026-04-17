#include <stdio.h>

int main() {
    int fila = 5, esp, sim;

    while(fila >= 1) {
        esp = 5 - fila;
        while(esp--) printf(" ");

        sim = 2*fila - 1;
        while(sim--) printf("@");

        printf("\n");
        fila--;
    }

    fila = 2;

    while(fila <= 5) {
        esp = 5 - fila;
        while(esp--) printf(" ");

        sim = 2*fila - 1;
        while(sim--) printf("@");

        printf("\n");
        fila++;
    }

    return 0;
}
