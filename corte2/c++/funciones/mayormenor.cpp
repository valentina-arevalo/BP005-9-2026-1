#include <iostream>
using namespace std;

int factorialIterativo(int n;
int factorialRecursivo(int n;

int main(){

int numero;

cout << "Digite numero: ";
cin >> "%d",&numero;

cout << "Factorial iterativo: %d\n",
factorialIterativo(numero);

cout << "Factorial recursivo: %d\n",
factorialRecursivo(numero);

return 0;

}

int factorialIterativo(int n){

int resultado=1;
int i;

for(i=1;i<=n;i++){

resultado*=i;

}

return resultado;

}

int factorialRecursivo(int n){

if(n==0){

return 1;

}

else{

return n*factorialRecursivo(n-1;

}

}
