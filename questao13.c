#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A, B,Aux;

    printf("Digite um valor para A\n");
    scanf("%d",&A);

    printf("\nDigite um valor para B\n");
    scanf("%d",&B);
    Aux=A;
    A=B;
    B=Aux;

    printf("Valor de A: %d\nValor de B: %d",A,B);
}