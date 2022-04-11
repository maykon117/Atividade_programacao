#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius \n");
    scanf("%f",&celsius);

    fahrenheit=(9*celsius+160) /5;

    printf("A temperatura em Fahrenheit: %2.f",fahrenheit);
}