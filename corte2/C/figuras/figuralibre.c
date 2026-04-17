#include <stdio.h>

int main() {
    int i, j;

    // techo
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) printf(" ");
        for(j = 1; j <= 2*i - 1; j++) printf("^");
        printf("\n");
    }

    // base
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 9; j++) {
            if(j == 1 || j == 9 || i == 4)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
