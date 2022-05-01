#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 15

int main ()
{
  float matriz[TAM], maior, menor, soma = 0;

  printf
    ("\nDigite 15 valores e verificaremos qual e o maior e o menor em seguida somaremos:\n");

  for (int i = 0; i < TAM; i++)
    {
      printf (" Valor: ", i);
      scanf ("%f", &matriz[i]);
    }

  //COMO A MATRIZ É DE 15 VALORES
  //OPTEI POR DEIXAR O USUARIO 
  //DIGITAR OS VALORES....

  maior = matriz[0];
  menor = matriz[0];


  for (int i = 0; i < TAM; i++)
    {
      if (matriz[i] > maior)
	maior = matriz[i];
      if (matriz[i] < menor)
	menor = matriz[i];
    }

  printf ("\n\n Maior: %.0f\n", maior);
  printf (" Menor: %.0f", menor);
  soma = (float) maior + (float) menor;
  printf ("\nA soma e: %.0f ", soma);

}