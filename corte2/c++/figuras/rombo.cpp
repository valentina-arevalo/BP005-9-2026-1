#include <iostream>
using namespace std;

int main() {
    int i, j, k;

    for (i = 1; i <= 7; i++) {

        for (j = 1; j <= 7 - i; j++)
            cout << " ";

        for (k = 1; k <= 2 * i - 1; k++)
            cout << "*";

        cout << endl;
    }

    for (i = 6; i >= 1; i--) {

        for (j = 1; j <= 7 - i; j++)
            cout << " ";

        for (k = 1; k <= 2 * i - 1; k++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
