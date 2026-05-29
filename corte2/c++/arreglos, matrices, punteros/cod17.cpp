#include <iostream>
using namespace std;

int main() {

    int filas = 2;
    int columnas = 3;

    int *matriz = new int[filas * columnas];

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            matriz[i * columnas + j] =
            (i + 1) * 10 + j;
        }
    }

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            cout << matriz[i * columnas + j]
                 << " ";
        }

        cout << endl;
    }

    delete[] matriz;

    matriz = nullptr;

    return 0;
}
