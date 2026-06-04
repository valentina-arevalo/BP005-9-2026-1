#include <iostream>
#include <bitset>

using namespace std;

int main() {
    cout << "0   = " << bitset<8>(0) << endl;
    cout << "1   = " << bitset<8>(1) << endl;
    cout << "5   = " << bitset<8>(5) << endl;
    cout << "127 = " << bitset<8>(127) << endl;
    cout << "255 = " << bitset<8>(255) << endl;

    return 0;
}
