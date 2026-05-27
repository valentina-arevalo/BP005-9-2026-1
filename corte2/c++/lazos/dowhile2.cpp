#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\nMENU\n";
        cout << "1. Saludar\n";
        cout << "2. Despedirse\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Hola." << endl;
        } else if (opcion == 2) {
            cout << "Hasta luego." << endl;
        } else if (opcion == 0) {
            // no hace nada
        } else {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
