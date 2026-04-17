#include <stdio.h>

int main() {
    int fila = 1, col;
    int n = 9, centro = 5;

    do {
        col = 1;
        do {
            if(fila == centro || col == centro)
                printf("+");
            else
                printf(" ");
            col++;
        } while(col <= n);

        printf("\n");
        fila++;
    } while(fila <= n);

    return 0;
}
