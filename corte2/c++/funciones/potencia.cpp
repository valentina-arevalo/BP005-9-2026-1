#include <iostream>
using namespace std;

void mayorMenor(int v[],int n;

int main(){

int v[5];
int i;

for(i=0;i<5;i++){
cin >> "%d",&v[i];
}

mayorMenor(v,5;

return 0;
}

void mayorMenor(int v[],int n){

int mayor=v[0];
int menor=v[0];
int i;

for(i=1;i<n;i++){

if(v[i]>mayor)
mayor=v[i];

if(v[i]<menor)
menor=v[i];

}

cout << "Mayor: %d\n",mayor;
cout << "Menor: %d",menor;

}
