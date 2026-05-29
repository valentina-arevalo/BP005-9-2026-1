#include <iostream>
using namespace std;

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    for (int i = 0; i < 5; i++) {

        cout << "datos[" << i << "] = "
             << datos[i]
             << ", direccion = "
             << &datos[i]
             << endl;
    }

    return 0;
}
