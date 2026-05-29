#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Cuantos enteros desea guardar: ";
    cin >> n;

    int *datos = new int[n];

    for (int i = 0; i < n; i++) {

        cout << "Ingrese datos[" << i << "]: ";

        cin >> datos[i];
    }

    cout << "Datos ingresados: ";

    for (int i = 0; i < n; i++) {

        cout << datos[i] << " ";
    }

    cout << endl;

    delete[] datos;

    datos = nullptr;

    return 0;
}
