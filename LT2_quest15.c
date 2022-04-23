#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,potencia;

    for(i=0; i<=7;i++){
        potencia=pow(3,i);
        printf("3 Elevado a %d e igual a %d\n",i,potencia);
    }
}