#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float compri,larg,alt,vol;

    printf("Digite o valor do comprimento \n");
    scanf("%f",&compri);

    printf("Digite o valor da largura \n");
    scanf("%f",&larg);

    printf("Digite o valor da altura \n");
    scanf("%f",&alt);

    vol=compri*larg*alt;

    printf("O valome da caixa e: %2.f \n", vol);
    
}