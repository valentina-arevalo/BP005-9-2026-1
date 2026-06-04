#include <iostream>

using namespace std;

int main() {
    double celsius;

    cin >> celsius;

    cout << "Fahrenheit: "
         << (celsius * 9.0 / 5.0) + 32
         << endl;

    return 0;
}
