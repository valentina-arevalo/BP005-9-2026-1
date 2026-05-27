#include <stdio.h>

void duplicar(int *p) {
    if (p != NULL) {
        *p = (*p) * 2;
    }
}

int main() {
    int x = 10;

    printf("Antes: %d\n", x);

    duplicar(&x);

    printf("Despues: %d\n", x);

    return 0;
}
