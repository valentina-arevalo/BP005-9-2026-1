#include <stdio.h>

float area(float b,float h);
float perimetro(float b,float h);

int main(){

float b,h;

printf("Base: ");
scanf("%f",&b);

printf("Altura: ");
scanf("%f",&h);

printf("Area: %.2f\n", area(b,h));
printf("Perimetro: %.2f", perimetro(b,h));

return 0;
}

float area(float b,float h){
return b*h;
}

float perimetro(float b,float h){
return 2*(b+h);
}
