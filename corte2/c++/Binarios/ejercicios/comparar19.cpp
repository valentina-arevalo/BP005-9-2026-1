#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    double tolerancia = 0.000001;

    if (fabs(a - b) < tolerancia) {
        cout << "Son aproximadamente iguales"
             << endl;
    }
    else {
        cout << "Son diferentes"
             << endl;
    }

    return 0;
}
