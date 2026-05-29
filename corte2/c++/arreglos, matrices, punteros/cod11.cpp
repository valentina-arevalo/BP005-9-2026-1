#include <iostream>
using namespace std;

int main() {

    int m[2][3] = {

        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "m[0][0] = "
         << m[0][0] << endl;

    cout << "m[0][2] = "
         << m[0][2] << endl;

    cout << "m[1][1] = "
         << m[1][1] << endl;

    return 0;
}
