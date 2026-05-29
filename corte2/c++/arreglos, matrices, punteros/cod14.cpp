#include <iostream>
using namespace std;

int main() {

    int m[2][3] = {

        {1, 2, 3},
        {4, 5, 6}
    };

    int *p = &m[0][0];

    int total = 2 * 3;

    for (int k = 0; k < total; k++) {

        cout << *(p + k) << " ";
    }

    cout << endl;

    return 0;
}
