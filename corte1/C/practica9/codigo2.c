#include <stdio.h>
int main () {
   int myNum;
     printf("Ingrese el numero: \n");
     scanf("%d", &myNum);

        if (myNum > 0) {
                printf("El valor es un numero positivo.\n");
        } 
           else if (myNum < 0) {
                printf("El valor es un numero negativo.\n");
           } 
             else {
                printf("El valor es 0.");
             }
return 0;
}
