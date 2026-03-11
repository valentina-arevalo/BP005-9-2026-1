#include <stdio.h>
  int sum(int x1, int x2){

      int result;
      result= x1 + x2;
      return result;
}

  int main (){
  int  a, b, r;
   a=3;
   b=5;
   r=sum(a, b);
 
   printf("El resultado de la suma es:  %d\n ", r);
return 0;
}
