#include <iostream>
using namespace std;

int main() {
    int *p = NULL;

    if (p != NULL) {
        cout << "Valor = " << *p << endl;
    } else {
        cout << "p no apunta a una direccion valida." << endl;
    }

    return 0;
}
