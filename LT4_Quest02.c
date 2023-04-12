#include <stdio.h>

void trocar(int *p1, int *p2); 

int
main ()
{
 int n1,n2;
 
 printf("Digite um número para n1\n");
 scanf("%d",&n1);
 
 printf("Digite um número para n2\n");
 scanf("%d",&n2);
 printf("\nValor original\n");
 printf("N1: %d \nN2: %d\n",n1,n2);

 trocar(&n1,&n2);
  printf("\n");
 printf("Trocado\n");
 printf("N1: %d\nN2: %d\n",n1,n2);
 
 
 
  return 0;
}
void trocar(int *p1, int *p2){
    int aux;
    
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
