
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
  
    int continuar=1;
    int votos=0,votos_r=0,votos_bn=0;
    float p_total,P,R,B;

    do
    {
        printf("\n\tEscolha uma opcao!!\n\n");
        printf("5. Paulo\n");
        printf("7. Renata\n");
        printf("01. Branco/Nulo\n");
        printf("----------------------------\n");
        printf("0. Resultado Geral\n");


        scanf("%d", &continuar);
        

        switch(continuar)
        {
            case 5:
                votos=votos+1;
               
                break;

            case 7: 
                votos_r=votos_r+1;
                
                break;

            case 01:
                votos_bn=votos_bn+1;
              
                
                break;
            case 0:
                printf("\nPaulo teve %d votos \n",votos);
                printf("Renata teve %d votos \n",votos_r);
                printf("Branco/Nulo teve %d votos \n",votos_bn);
                
                p_total=votos+votos_r+votos_bn;

                P=votos/p_total * 100;
                R=votos_r/p_total * 100;
                B=votos_bn/p_total * 100;

                printf("\n============================================\n");
                printf("\nO candidato Paulo teve %.f%% dos votos\n",P);
                printf("A candidata Renata teve %.f%% dos votos\n",R);
                printf("Os Brancos e Nulos teve %.f%% dos votos\n",B);

                exit(0);

            default:
            
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}