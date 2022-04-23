#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float J=150,P=110;
    int cont=0;

    do
    {
       J=J+2;
       P=P+3;
       cont=cont+1;
    } while (J>P);
    printf("Serao nescessarios %d Anos para Pedro ser maior que Jose",cont);

} 