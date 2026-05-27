#include <stdio.h>

void sumarMatriz(int m[3][3]);

int main(){

int m[3][3];
int i,j;

for(i=0;i<3;i++){

for(j=0;j<3;j++){

printf("Dato: ");
scanf("%d",&m[i][j]);

}
}

sumarMatriz(m);

return 0;
}

void sumarMatriz(int m[3][3]){

int i,j,suma=0;

for(i=0;i<3;i++){

for(j=0;j<3;j++){

suma+=m[i][j];

}
}

printf("Suma=%d",suma);

}
