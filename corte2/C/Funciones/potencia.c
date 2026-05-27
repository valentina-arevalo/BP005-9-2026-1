#include <stdio.h>

int potencia(int base,int exponente);

int main(){

int b,e;

printf("Base: ");
scanf("%d",&b);

printf("Exponente: ");
scanf("%d",&e);

printf("Resultado: %d", potencia(b,e));

return 0;
}

int potencia(int base,int exponente){

int i;
int resultado=1;

for(i=1;i<=exponente;i++){
resultado*=base;
}

return resultado;

}
