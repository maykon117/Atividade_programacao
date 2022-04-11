#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float horas_trab,vlr_hora,p_desconto,total_desconto,vlr_bruto,vlr_liquido;

    printf("\nDigite a quantidade de horas trabalhadas \n");
    scanf("%f",&horas_trab);

    printf("\nDigite o valor a receber por hora \n");
    scanf("%f",&vlr_hora);

    printf("\nDigite o percentual de desconto \n");
    scanf("%f",&p_desconto);

    vlr_bruto=horas_trab*vlr_hora;
    total_desconto=(p_desconto/100)*vlr_bruto;
    vlr_liquido=vlr_bruto-total_desconto;

    printf("Salario bruto %2.f\ndesconto: %2.f\nsalario liquido: %2.f\n",vlr_bruto,total_desconto,vlr_liquido);
    
}