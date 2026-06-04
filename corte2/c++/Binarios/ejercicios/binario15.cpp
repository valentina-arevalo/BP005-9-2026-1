#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

int main() {
    cout << "-1   = "
         << bitset<8>(static_cast<uint8_t>(-1))
         << endl;

    cout << "-2   = "
         << bitset<8>(static_cast<uint8_t>(-2))
         << endl;

    cout << "-5   = "
         << bitset<8>(static_cast<uint8_t>(-5))
         << endl;

    cout << "-128 = "
         << bitset<8>(static_cast<uint8_t>(-128))
         << endl;

    return 0;
}
