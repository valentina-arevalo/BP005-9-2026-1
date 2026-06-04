#include <iostream>

using namespace std;

int main() {
    double nota1;
    double nota2;
    double nota3;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    double promedio = (nota1 + nota2 + nota3) / 3;

    cout << "Promedio: " << promedio << endl;

    return 0;
}
