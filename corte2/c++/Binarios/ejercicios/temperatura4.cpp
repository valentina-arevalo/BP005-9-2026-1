#include <iostream>

using namespace std;

int main() {  
    double celsius;
  
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
   
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperatura en Fahrenheit: "
         << fahrenheit << endl;

    return 0;
}
