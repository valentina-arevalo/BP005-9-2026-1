#include <iostream>
using namespace std;
void mostrarArreglo (int *datos, int n) {

int i;

if (datos == NULL) {
cout << "El arreglo no es valido.\n";
return;
}

for (i=0; i < n; i++) {
cout << "%d ", datos [i];
}
cout << "\n";
}
int main() {

int datos [5] = {8, 3, 15, 6, 10};

mostrarArreglo (datos, 5;
return 0;
}
