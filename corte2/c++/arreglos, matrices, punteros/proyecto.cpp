#include <iostream>
using namespace std;

void leerArreglo(int *datos, int n) {

    for (int i = 0; i < n; i++) {

        cout << "Ingrese datos[" << i
             << "]: ";

        cin >> datos[i];
    }
}

void mostrarArreglo(int *datos, int n) {

    for (int i = 0; i < n; i++) {

        cout << datos[i] << " ";
    }

    cout << endl;
}

int sumarArreglo(int *datos, int n) {

    int suma = 0;

    for (int i = 0; i < n; i++) {

        suma = suma + datos[i];
    }

    return suma;
}

void leerMatriz(int *m,
                int filas,
                int columnas) {

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            cout << "m[" << i
                 << "][" << j
                 << "]: ";

            cin >> m[i * columnas + j];
        }
    }
}

void mostrarMatriz(int *m,
                   int filas,
                   int columnas) {

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            cout << m[i * columnas + j]
                 << " ";
        }

        cout << endl;
    }
}

int sumarMatriz(int *m,
                int filas,
                int columnas) {

    int suma = 0;

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            suma =
            suma + m[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    int n = 5;

    int *datos = new int[n];

    int filas = 2;
    int columnas = 3;

    int *m =
    new int[filas * columnas];

    cout << "=== ARREGLO ==="
         << endl;

    leerArreglo(datos, n);

    mostrarArreglo(datos, n);

    cout << "Suma arreglo = "
         << sumarArreglo(datos, n)
         << endl;

    cout << endl
         << "=== MATRIZ ==="
         << endl;

    leerMatriz(m, filas, columnas);

    mostrarMatriz(m,
                  filas,
                  columnas);

    cout << "Suma matriz = "
         << sumarMatriz(m,
                        filas,
                        columnas)
         << endl;

    delete[] datos;

    delete[] m;

    datos = nullptr;

    m = nullptr;

    return 0;
}
