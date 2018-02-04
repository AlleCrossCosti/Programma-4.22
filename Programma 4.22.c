#include <stdio.h>
#include <math.h>

int main () {

   int num, potenza, risultato;
   
   num = 7;
   potenza = 2;
   risultato = pow(num, potenza);
   
   printf("pow(%d)^%d= %d", num, potenza, risultato);
   
   return 0;
   
   }
