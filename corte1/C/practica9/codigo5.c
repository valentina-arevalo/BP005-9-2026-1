#include <stdio.h>
int main () {
   int temperatura;
        printf("Ingrese la temperatura: \n");
        scanf("%d", &temperatura);

           if (temperatura < 0) {
             printf("Esta helando!.\n");
            }
              else if (temperatura < 20) {
                printf("Esta fresco.\n");
              } 
                 else {
                   printf("Esta haciendo calor.\n");
                 }
  return 0;
}
