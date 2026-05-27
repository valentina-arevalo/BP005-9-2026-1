#include <iostream>
using namespace std;

void duplicar(int *p) {
    if (p != NULL) {
        *p = (*p) * 2;
    }
}

int main() {
    int x = 10;

    cout << "Antes: " << x << endl;

    duplicar(&x);

    cout << "Despues: " << x << endl;

    return 0;
}
