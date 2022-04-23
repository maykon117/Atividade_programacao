#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i, n;
   printf("Qual numero voce deseja faze a tabuada: \n\n");
   scanf("%d", &n);
   printf("\n");
  
  


   printf("======TABUADA DO %d =======\n",n);
   for (int i = 1; i <=10; i++)
   {
       printf("|  %dx%d=%d\n",n,i,(n*i));
       
   }
   printf("===========================\n");

   
  
}
