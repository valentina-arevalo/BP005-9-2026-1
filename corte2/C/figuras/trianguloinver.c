#include <stdio.h>

int main() {
    int i = 6, j;

    while(i >= 1) {
        j = 1;
        while(j <= i) {
            printf("X ");
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
