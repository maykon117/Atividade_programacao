#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, Sm=0;

    do{
        printf("Digite um numero inteiro:\n");
        scanf("%d", &n);
        if (n %3 ==0)
        {
            printf("O numero e divisivel por 3!!: %d\n",n);
        } else{
            printf("NAO e divisivel por 3!!\n",n);
        }   

    }while (n!=0);
   
}