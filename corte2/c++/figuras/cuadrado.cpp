#include <iostream>
using namespace std;

int main() {
    int fila = 1, col;
    int n = 9, centro = 5;

    do {
        col = 1;
        do {
            if(fila == centro || col == centro)
                cout << "+";
            else
                cout << " ";
            col++;
        } while(col <= n;

        cout << "\n";
        fila++;
    } while(fila <= n;

    return 0;
}
