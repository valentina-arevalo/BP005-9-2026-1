#include <iostream>
using namespace std;

void incrementarTodos(int *datos, int n) {

    if (datos == nullptr) {
        return;
    }

    for (int i = 0; i < n; i++) {

        datos[i] = datos[i] + 1;
    }
}

void mostrarArreglo(int *datos, int n) {

    for (int i = 0; i < n; i++) {

        cout << datos[i] << " ";
    }

    cout << endl;
}

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    cout << "Antes: ";

    mostrarArreglo(datos, 5);

    incrementarTodos(datos, 5);

    cout << "Despues: ";

    mostrarArreglo(datos, 5);

    return 0;
}
