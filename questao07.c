#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int horas,min,seg;
    
    printf("\nDigite a quantidade de horas\n");
    scanf("%d",&horas);
    printf("\nDigite a quantidade de minutos\n");
    scanf("%d",&min);
    printf("\nDigite a quantidade de segundos\n");
    scanf("%d",&seg);
    
    horas=60*60*horas;
    min=60*min;
    
    printf("O resultado em segundos e de %d \n",horas+min+seg);
    
    
    
    
}