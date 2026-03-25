#include <stdio.h>
int main () {
   int mynum;
      printf("Ingrese el numero: \n");
      scanf("%d", &mynum);

        if (mynum % 2 == 0) {
           printf("%d es par.\n", mynum);
        } 
           else {
               printf("%d es impar.\n", mynum);
           }
 return 0;
}
