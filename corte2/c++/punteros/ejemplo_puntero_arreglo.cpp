#include <iostream>
using namespace std;

int main() {
    int datos[3] = {10, 20, 30};
    int *p = datos;

    cout << "datos[0] = " << datos[0] << endl;
    cout << "*p = " << *p << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "*(p + 2) = " << *(p + 2) << endl;

    return 0;
}
