#include <iostream>
using namespace std;

int main() {
    int i;
    int contador = 0;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << " es par" << endl;
            contador++;
        }
    }

    cout << "Cantidad de numeros pares: " << contador << endl;

    return 0;
}
