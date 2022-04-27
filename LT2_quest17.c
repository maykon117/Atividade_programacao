#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float celsius,farenheit;
    for (celsius = 10; celsius <= 100; celsius=celsius+10)
    {
        farenheit=((9*celsius+160)/5);
        printf("A temperatura %.0f C Celcius em Farenheit e %.0f F \n",celsius,farenheit);
    }
    
}