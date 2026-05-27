#include <iostream>
using namespace std;
#include <stdlib.h>
int main() {
int n;
int i;
int *datos = NULL;

cout << "Cuantos enteros desea guardar: ";
cin >> "%d", &n;
datos = malloc(n * sizeof(int);

if (datos == NULL) {
cout << "No se pudo reservar memoria.\n";
return 1;
}

for (i=0; i<n; i++) {
cout << "Ingrese datos [%d]: ", i;
cin >> "%d", &datos[i];
}
cout << "Datos ingresados: ";
for (i=0; i < n; i++) {
cout << "%d ", datos [i];
}
cout << "\n";
free(datos;

datos = NULL;
return 0;
}
