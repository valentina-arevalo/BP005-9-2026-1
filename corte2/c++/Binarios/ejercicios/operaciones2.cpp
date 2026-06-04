#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;

    if (b != 0) {
        cout << "Division: " << a / b << endl;
        cout << "Residuo: " << a % b << endl;
    } else {
        cout << "No se puede dividir entre cero." << endl;
    }

    return 0;
}
