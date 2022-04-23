#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n, Sm=0;

    do{
        printf("Digite um numero inteiro:\n");
        scanf("%d", &n);
        if (n%2==0)
        {
            Sm=Sm+n;
        }    

    }while (n!=0);
    printf("A soma dos pares sao: %d\n",Sm);

}
//EXPLICANDO O CODIGO
// VOCE DEVERA ATRIBUIR VALORES DE ACORDO COM O QUE O USUARIO 
//QUISER, EXEMPLO=> EU POSSO COLOCAR VARIOS NUMEROS DE 1 A 10
// OU VARIAR 1, 8, 25, 99, 2000, 5000, 40, 42, 2.
// O PROGRAMA SÓ ESCOLHE OS NUMEROS QUE SÃO PARES PARA EFETUAR 
// O SOMATORIO.