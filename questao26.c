#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float D;
    printf("Digite as cordenadas | x1,x2,y1,y2 | respectivamente \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    D = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );

    printf("%.2f",D);
    
}