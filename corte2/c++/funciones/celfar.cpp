#include <iostream>
using namespace std;

void calcular(int v[],int n;

int main(){

int v[5];
int i;

for(i=0;i<5;i++){
cout << "Numero: ";
cin >> "%d",&v[i];
}

calcular(v,5;

return 0;
}

void calcular(int v[],int n){

int suma=0,i;

for(i=0;i<n;i++)
suma+=v[i];

cout << "Suma: %d\n",suma;
cout << "Promedio: %.2f",(float)suma/n;

}
