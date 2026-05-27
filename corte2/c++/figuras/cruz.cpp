#include <iostream>
using namespace std;

int main() {
    int i = 6, j;

    while(i >= 1) {
        j = 1;
        while(j <= i) {
            cout << "X ";
            j++;
        }
        cout << "\n";
        i--;
    }

    return 0;
}
