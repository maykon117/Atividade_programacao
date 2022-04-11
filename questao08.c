#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int potencia=0,x;


    printf("Digite um valor inteiro para eleva-lo ao quadrado\n");
    scanf("%d",&x);
    potencia=pow(x,2);

    printf("\nO resultado e: %d\n", potencia);



}