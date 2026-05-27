#include <iostream>
using namespace std;

float convertirAFahrenheit(float celsius;

int main() {
    float c;

    cout << "Digite Celsius: ";
    cin >> "%f",&c;

    cout << "Fahrenheit: %.2f", convertirAFahrenheit(c);

    return 0;
}

float convertirAFahrenheit(float celsius){
    return (9.0/5.0*celsius)+32;
}
