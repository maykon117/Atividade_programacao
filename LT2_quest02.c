
#include <stdio.h>
#include <stdlib.h>

int main()

{
  
    int continuar=1;

    do
    {
        printf("\n\tEscolha uma opcao!!\n\n");
        printf("1. Segunda\n");
        printf("2. Terca\n");
        printf("3. Quarta\n");
        printf("4. Quinta\n");
        printf("5. Sexta\n");
        printf("6. Sabado\n");
        printf("7. Domingo\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        

        switch(continuar)
        {
            case 1:
                printf("Segunda");
                break;

            case 2: 
                printf("Terca");
                break;

            case 3:

                printf("Quarta");
                break;
            case 4:

                printf("Quinta");
                break;
            case 5:

                printf("Sexta");
                break;
            case 6:

                printf("Sabado");
                break;
            case 7:

                printf("Domingo");
                break;
            case 0:
                exit(0);
                break;

            default:
            if(continuar > 7){
                printf("\tSemana nao existe");
                
            }
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}