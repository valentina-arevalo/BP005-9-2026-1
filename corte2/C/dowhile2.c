#include <stdio.h>

   int main() {
     int opcion;

    do {
    printf("\nMENU\n");
    printf("1. Saludar\n");
    printf("2. Despedirse\n");
    printf("0. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
   
    if (opcion == 1){
     printf("Hola.\n");
    }
      else if (opcion == 2){
       printf("Hasta luego.\n");
      }
      else if (opcion == 0){
      } 
      else {
       printf("Opcion invalida.\n");
      }

    }
    while (opcion != 0);
    return 0;
}

