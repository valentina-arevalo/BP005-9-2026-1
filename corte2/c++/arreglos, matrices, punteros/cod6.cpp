#include <iostream>
using namespace std;

void mostrarArreglo(int datos[], int n) {

    for (int i = 0; i < n; i++) {

        cout << datos[i] << " ";
    }

    cout << endl;
}

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    mostrarArreglo(datos, 5);

    return 0;
}
