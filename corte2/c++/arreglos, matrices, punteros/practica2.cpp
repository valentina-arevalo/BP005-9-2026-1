#include <iostream>
using namespace std;

const int COLUMNAS = 3;

void mostrarMatriz(int m[][COLUMNAS],
                   int filas) {

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < COLUMNAS; j++) {

            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}

int sumarMatriz(int m[][COLUMNAS],
                int filas) {

    int suma = 0;

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < COLUMNAS; j++) {

            suma = suma + m[i][j];
        }
    }

    return suma;
}

int main() {

    int m[2][COLUMNAS] = {

        {1, 2, 3},
        {4, 5, 6}
    };

    mostrarMatriz(m, 2);

    cout << "Suma = "
         << sumarMatriz(m, 2)
         << endl;

    return 0;
}
