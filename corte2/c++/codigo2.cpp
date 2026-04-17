#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    int numero;
    int suma = 0;

    while (contador <= 3) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        suma = suma + numero;
        contador++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
