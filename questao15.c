#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int dias_trab;
float Salario_vendedor=50.25,vlr_liquido,vlr_bruto,gratificacao;


printf("Quantos dias foram trabalhados \n");
scanf("%d",&dias_trab);

if (dias_trab <= 10)
{
   vlr_liquido=Salario_vendedor*dias_trab; 
   vlr_bruto=(vlr_liquido- (vlr_liquido *0.1));
   printf("Salario de acordo com os dias trabalhados R$: %2.f,00",vlr_bruto);

}else if (dias_trab > 10 && dias_trab <= 20)
{
    vlr_liquido=Salario_vendedor*dias_trab;
    gratificacao=vlr_liquido*(0.2);
    vlr_bruto=gratificacao+vlr_liquido;
    vlr_bruto=(vlr_bruto- (vlr_bruto *0.1));
   printf("Salario de acordo com os dias trabalhados R$: %2.f,00",vlr_bruto);

}else if (dias_trab > 20)
{
   
    vlr_liquido=Salario_vendedor*dias_trab;
    gratificacao=vlr_liquido*(0.3);
    vlr_bruto=gratificacao+vlr_liquido;
    vlr_bruto=(vlr_bruto- (vlr_bruto *0.1));
   printf("Salario de acordo com os dias trabalhados R$: %2.f,00",vlr_bruto);
}




}