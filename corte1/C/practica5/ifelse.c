#include <stdio.h>
int main() {
  int time;
    printf("Escriba una hora en hora militar ");
    scanf("%d", &time);

  if(time<18) {
    printf("good day");
  }
  else{
      printf("good evening");
  }
return 0;
}
