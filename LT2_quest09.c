#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int a = 1, b = 1,n, i;

printf("Digite o termo: ");
scanf("%d", &n);

printf("\n");
for(i=0;i<n;i++) {

if(i % 20 == 0) {
printf("%d ", a);
a = a + b;

}else {

printf("%d ", b);
b = b + a;

    }
}



}