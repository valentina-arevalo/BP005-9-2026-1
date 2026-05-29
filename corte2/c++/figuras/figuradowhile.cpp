#include <iostream>
using namespace std;

int main() {
    int i = 1, j;

    do {
        j = 1;

        do {

            if (
                (i == 2 && (j >= 5 && j <= 6)) ||
                (i == 2 && (j >= 15 && j <= 16)) ||
                (i == 3 && (j >= 4 && j <= 9)) ||
                (i == 3 && (j >= 12 && j <= 17)) ||
                (i >= 4 && i <= 6 && j >= 4 && j <= 17) ||
                (i == 7 && j >= 5 && j <= 16) ||
                (i == 8 && j >= 7 && j <= 14) ||
                (i == 9 && j >= 9 && j <= 12) ||
                (i == 10 && j == 10)
            ) {
                cout << "o";
            } else {
                cout << " ";
            }

            j++;

        } while (j <= 20);

        cout << endl;
        i++;

    } while (i <= 10);

    return 0;
}
