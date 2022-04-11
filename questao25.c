#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
   int TP, H, HS, M,S;
   HS=3600;
   
   printf("Digite a quantidade de segundos: ");
   scanf("%d", &TP);


   H = TP/HS;
   M = (TP -(HS*H))/60;
   S = (TP -(HS*H)-(M*60));


   printf("%d Hora\n%d Minutos\n%d Segundos\n ",H,M,S);
   
   
}