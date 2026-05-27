#include <stdio.h>

void analizar(float nota);

int main(){

float nota;

printf("Digite nota: ");
scanf("%f",&nota);

analizar(nota);

return 0;
}

void analizar(float nota){

if(nota>=3.0)
printf("Aprobo");

else
printf("Reprobo");

}
