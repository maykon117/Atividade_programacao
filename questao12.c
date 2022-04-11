#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,op=0;
    float soma,subtracao,multiplicacao,divisao;

    
    printf("Digite um Valor inteiro! \n");
    scanf("%d",&a);

    printf("Digite outro Valor inteiro! \n");
    scanf("%d",&b);
    
    printf("Digite a operacao que deseja\n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n5-nao fazer nada\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        soma=a+b;
        printf("Valor da soma: %2.f \n",soma);
        break;
    case 2:
        subtracao=a-b;
        printf("Valor da subtracao: %2.f \n",subtracao);
        break;
    case 3:
        multiplicacao=a*b;
        printf("Valor da multiplicacao: %2.f \n",multiplicacao);
        break;
    case 4:
    if (b == 0){
        printf("Essa divisao nao existe");
        
        }
        divisao=a/b;
        printf("Valor da divisao: %2.f \n",divisao);
        break;
        
    case 5:
        
        printf("Obrigado mesmo assim");
        exit(0);
    
    default:
        printf("Numero invalodo tente outra vez");
        break;
    }
  

}