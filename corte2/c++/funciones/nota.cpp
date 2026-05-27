#include <iostream>
using namespace std;

float area(float b,float h;
float perimetro(float b,float h;

int main(){

float b,h;

cout << "Base: ";
cin >> "%f",&b;

cout << "Altura: ";
cin >> "%f",&h;

cout << "Area: %.2f\n", area(b,h);
cout << "Perimetro: %.2f", perimetro(b,h);

return 0;
}

float area(float b,float h){
return b*h;
}

float perimetro(float b,float h){
return 2*(b+h;
}
