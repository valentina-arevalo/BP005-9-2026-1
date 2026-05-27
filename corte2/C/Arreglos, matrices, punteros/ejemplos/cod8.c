#include <stdio.h>
void incrementarTodos (int *datos, int n) {

int i;
if (datos == NULL) {
return;
}

for (i=0; i<n; i++) {
datos [i] = datos [i] + 1;
}
}
void mostrarArreglo (int *datos, int n) {
int i;

for (i=0; i < n; i++) {
printf("%d ", datos [i]);
}
printf("\n");
}
int main() {
int datos [5] = {8, 3, 15, 6, 10};

printf("Antes: ");
mostrarArreglo (datos, 5);
incrementarTodos (datos, 5);
printf("Despues: ");
mostrarArreglo (datos, 5);
return 0;
}
