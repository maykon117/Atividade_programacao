#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abertura(){
    int n1, n2;

    printf("\nDigite um numero\n ");
    scanf("%d",&n1);
    printf("\nDigite outro numero\n ");
    scanf("%d",&n2);

    if (n1 > n2)
    {
    printf("\nO numero %d e maior que %d\n ",n1 ,n2);
    }else if(n2 > n1){
        printf("\nO numero %d e maior que %d\n ",n2 ,n1);
    }else if (n1 == n2)
    {
        printf("\nO numero %d e o numero %d sao iguais\n ",n1 ,n2);
    }
    
}
int main(){

int continua=1;

do{


abertura();


printf("\ndeseja continuar?? \n1- SIM ou 0 (ZERO) NAO\n ");
scanf("%d",&continua);
}while (continua!=0);






}