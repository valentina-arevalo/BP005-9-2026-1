#include <iostream>
using namespace std;

int main() {
    int i, j;

    // techo
    for (i = 1; i <= 5; i++) {

        for (j = 1; j <= 5 - i; j++)
            cout << " ";

        for (j = 1; j <= 2 * i - 1; j++)
            cout << "^";

        cout << endl;
    }

    // base
    for (i = 1; i <= 4; i++) {

        for (j = 1; j <= 9; j++) {

            if (j == 1 || j == 9 || i == 4)
                cout << "#";
            else
                cout << " ";

        }

        cout << endl;
    }

    return 0;
}
