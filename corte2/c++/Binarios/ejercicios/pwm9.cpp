#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    uint8_t pwm = 128;

    cout << "PWM: "
         << static_cast<int>(pwm)
         << endl;

    return 0;
}
