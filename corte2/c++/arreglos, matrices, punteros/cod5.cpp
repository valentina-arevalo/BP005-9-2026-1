#include <iostream>
using namespace std;

int main() {

    int datos[3] = {10, 20, 30};

    int *p = datos;

    cout << "datos[1] = "
         << datos[1] << endl;

    cout << "*(datos + 1) = "
         << *(datos + 1) << endl;

    cout << "*(p + 1) = "
         << *(p + 1) << endl;

    cout << "p[1] = "
         << p[1] << endl;

    return 0;
}
