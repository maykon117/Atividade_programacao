#include <stdio.h>

int
main ()
{

  int a = 0, b = 0, soma = 0;
  int *p = 0;

    
  p=&soma;
  
  printf ("Digite um valor para A:");
  scanf ("%d", &a);

  printf ("Digite um valor para B:");
  scanf ("%d", &b);


  *p = a + b;

 printf("Resultado : %d\n",soma);


 printf("Resultado endereço: %p",soma);
 
 
  return 0;
}
