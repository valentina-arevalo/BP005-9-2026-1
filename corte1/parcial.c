#include <stdio.h>
#include <stdbool.h>

    int main(){
     int cod, edd;
     double valor;
     float  n1, n2, n3, promedio;
     char inicial;
     char nombre[40];
     int matricula, docu, inducc, monitor;
     bool ingre;

     printf("Bienvenido al Sistema\n");

     printf("Digite su codigo estudiantil: ");
     scanf("%d", &cod);

     printf("Ingrese su nombre: ");
     scanf("%s", nombre);

     printf("Ingrese la inicial de su apellido: ");
     scanf(" %c", &inicial);

     printf("Digite su edad: ");
     scanf("%d", &edd);

     printf("Digite la primera nota: ");
     scanf("%f", &n1);

     printf("Digite la segunda nota: ");
     scanf("%f", &n2);

     printf("Digite la tercera nota: ");
     scanf("%f", &n3);

     printf("Ingrese el valor de la matricula: ");
     scanf("%lf", &valor);

     printf("¿Tiene matricula activa? (1=si 0=no): ");
     scanf("%d", &matricula);

     printf("¿Presenta el documento o carnet? (1=si 0=no): ");
     scanf("%d", &docu);
     printf("¿Aprobó la inducción? (1=si 0=no): ");
     scanf("%d", &inducc);

     printf("¿Es monitor de laboratorio? (1=si 0=no): ");
     scanf("%d", &monitor);

    if (n1<0 || n1>5.0  || n2<0 || n2>5.0 || n3<0 || n3>5.0 ){
      printf("Error, el rango de notas es incorrecto. (0.0 a 5.0)\n");
    }
     else{
     promedio = (n1 + n2 + n3)/ 3;

     if (promedio < 3.0){
        printf("Desempeño bajo\n");
     }
        else if (promedio < 4.0){
                printf("Desempeño Aceptable\n");
        }
             else if (promedio < 4.5){
                    printf("Desempeño bueno\n");
             }
                  else{
                      printf("Desempeño excelente\n");
                  }

      printf("El codigo es %s\n", (cod % 2 == 0) ? "par" : "impar");
      ingre = matricula && docu && (inducc || monitor);

      if (ingre){
         printf("Puede ingresar al sistema\n");

        if (promedio >= 4.8){
           printf("Acceso especial al sistema\n");
        }
           else{
                printf("Acceso normal\n");
           }
      }
        else {
           printf("Acceso denegado al sistema\n ");
        }
    }

  return 0;
}
