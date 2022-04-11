#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int X;
    float potencia=0;


    printf("Digite um valor inteiro! \n");
    scanf("%d",&X);
    

    printf(" triplo: %d \n",X*3);
    potencia=pow(X,2);
    printf("\n quadrado: %2.f \n ",potencia);
    printf("\n meio %d",X/2);
}