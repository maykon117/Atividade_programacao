#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float REAL, EUA, valor;

    printf("Digite o valor de cotacao da moeda Americana \n");
    scanf("%f",&EUA);

    printf("Digite o valor em REAL que deseja converter \n");
    scanf("%f",&REAL);

    valor=EUA*REAL;

    printf("O valor em dolar e: %2.f \n",valor);

    
}