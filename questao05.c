#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float conta,r,total;
    
    printf("Qual o valor da conta? \n");
    scanf("%f",&conta);

    r=conta*0.10;
    total=r+conta;

    printf("Total: %1.f ",total);

    return 0;
}