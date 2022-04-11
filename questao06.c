#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int op = 0;
    float altura, p_ideal;
    
    printf("Digite sua altura \n");
    scanf("%f",&altura);

    printf("Digite qual e o seu sexo \n 1-Homem \n 2-Mulher \n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        p_ideal = 72,7 * altura - 58;
        printf("O Peso ideal: %2.f KG", p_ideal);
        break;
    case 2:
         p_ideal = 62,1 * altura - 44,7;
        printf("O Peso ideal: %2.f KG", p_ideal);
        break;

    default:

        printf("Opcao invalida");
        break;
    }

    return 0;
}
