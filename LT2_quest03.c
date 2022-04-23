#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;
    float fatorial = 1;

    printf("Entre com um numero inteiro: ");
    scanf("%d",&n);

    
    if (n < 0)
        printf("Erro! Fatorial de numero negativo nao existe.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            fatorial = fatorial*i;
        }
        printf("Fatorial de %d = %.0f", n, fatorial);
    }

    return 0;
}