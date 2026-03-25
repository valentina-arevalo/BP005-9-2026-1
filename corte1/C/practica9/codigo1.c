#include <stdio.h>
int main() {
        int doorCode;

        printf("Ingrese el codigo de la puerta: ");
        scanf("%d", &doorCode);
           if (doorCode == 1337) {
                printf("Codigo correcto.\nLa puerta esta abierta.");
        } 
             else {
                printf("Codigo incorrecto.\nLa puerta se mantendra cerrada.");
            }
  return 0;
}
