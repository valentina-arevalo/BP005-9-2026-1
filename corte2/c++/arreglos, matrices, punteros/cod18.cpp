#include <iostream>
using namespace std;

int sumarMatriz(int *matriz,
                int filas,
                int columnas) {

    int suma = 0;

    if (matriz == nullptr) {

        return 0;
    }

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            suma = suma +
                   matriz[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    int filas = 2;
    int columnas = 3;

    int *matriz =
    new int[filas * columnas];

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            matriz[i * columnas + j] =
            i * columnas + j + 1;
        }
    }

    cout << "Suma = "
         << sumarMatriz(matriz,
                        filas,
                        columnas)
         << endl;

    delete[] matriz;

    matriz = nullptr;

    return 0;
}
