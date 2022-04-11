#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a;

      printf("Introduz um número: ");
      scanf("%f", &a );
      printf("O valor absoluto de %2.f é %2.f\n", a, abs(a) );
      printf("O primeiro numero %s\n",(a < 0 ?return a : return -a));
}