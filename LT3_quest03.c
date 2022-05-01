#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main ()
{
  char string[TAM];
  int tamanho = 0, i = 0;

  printf ("Digite um caractere para armazenar: \n");
  scanf ("%s", string);

  printf ("\nCaractere armazenado ==> %s \n", string);

  while (string[i] != '\0')
    {
      i++;
      tamanho++;
    }
  printf ("\nQTD de caracteres ==> %d", tamanho);
}