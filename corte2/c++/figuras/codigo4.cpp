#include <iostream>
using namespace std;

int main() {
    int fila, espacios, simbolos;

    for (fila = 1; fila <= 5; fila++) {

        for (espacios = 1; espacios <= 5 - fila; espacios++) {
            cout << " ";
        }

        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
