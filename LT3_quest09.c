#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 3
#define TAN 3

int
main ()
{
  int i, j, matriz[TAM][TAN];

  srand (time (NULL));

  for (i = 0; i < TAM; i++)
    {
      for (j = 0; j < TAN; j++)
	{
	  matriz[i][j] = rand () % TAM;
	}
    }

  for (i = 0; i < TAM; i++)
    {
      for (j = 0; j < TAN; j++)
	{
	  printf ("\t[%d]", matriz[i][j]);
	}
      printf ("\n");
    }
//=================================//
  for (i = 0; i < TAM; i++)
    {
      printf ("\nElementos da diagonal ==> %d\n ", matriz[i][i]);
    }

}