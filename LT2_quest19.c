#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n1,n2,n3,media;
    int faixa;
    printf("Digite a primeira nota:");
    scanf("%f",&n1);
    printf("Digite a segunda nota:");
    scanf("%f",&n2);
    printf("Digite a terceira nota:");
    scanf("%f",&n3);

    printf("Qual faixa de nota o aluno sera aprovado??");
    scanf("%d",&faixa);

    media=(n1+n2+n3)/3;

    if (media >= faixa)
    {
        printf("sua media foi de: %.2f portanto vc esta APROVADO :>",media);
    }else{
        printf("Sua media foi de: %.2f portanto vc esta REPROVADO :<",media);
    }
    

}