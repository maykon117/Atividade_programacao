#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;
    int continuar=1;

    do{
        printf("\nDigite um valor para A:\n ");
        scanf("%f",&a);
        printf("\nDigite um valor para B:\n ");
        scanf("%f",&b);
        c=a/b;
        if (b == 0)
        {
            printf("\nNao e possivel dividir por zero \n");
        }else{
           
            printf("\nA divisao de %.0f por %.0f e igual a:  %.1f \n",a,b,c);
        }
        
        
    }while (continuar);
   
    
}