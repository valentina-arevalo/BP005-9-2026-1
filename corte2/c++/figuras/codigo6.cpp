#include <iostream>
using namespace std;

int main() {
    int fila = 1;
    int columna;

    while (fila <= 4) {
        columna = 1;

        while (columna <= 4) {
            cout << "X ";
            columna++;
        }

        cout << endl;
        fila++;
    }

    return 0;
}
