#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

int main() {
    uint8_t x = 255;
    int8_t y = -1;

    cout << "uint8_t 255: "
         << bitset<8>(x)
         << endl;

    cout << "int8_t -1:  "
         << bitset<8>(static_cast<uint8_t>(y))
         << endl;

    return 0;
}
