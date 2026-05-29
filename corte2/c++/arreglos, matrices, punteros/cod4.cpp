#include <iostream>
using namespace std;

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    int *p = datos;

    for (int i = 0; i < 5; i++) {

        cout << "Elemento "
             << i
             << " = "
             << *(p + i)
             << endl;
    }

    return 0;
}
