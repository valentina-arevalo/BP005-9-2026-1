#include <stdio.h>
#include <stdbool.h>

int main () {
    int edad;
    int isCitizen;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    printf("Es ciudadano? (1 = si, 0 = no): ");
    scanf("%d", &isCitizen);
       
            if (edad >= 18) {
             printf("Tiene edad suficiente para votar.\n");
             
                 if (isCitizen) {
                   printf("Tiene la edad y es ciudadano, puede votar\n");

                   } else {
                     printf("Debe ser ciudadano para votar.\n");
                 }
             
            } else {
              printf("No tiene la edad suficiente para votar.\n");
            }
return 0;

}
