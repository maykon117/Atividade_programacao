#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float graos=0;
  int quadro=0;
       
  for(graos=1;graos>=0 && quadro!=64;graos=graos+graos){
    quadro++;
    printf("%d quadro tem %.0f graos\n",quadro,graos );
  }
  
}