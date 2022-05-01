#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

int main ()
{
  char string[TAM], string2[TAM];


  printf ("Digite um caractere para armazenar: \n");
  scanf ("%s", string);
  printf ("Digite outro caractere para armazenar: \n");
  scanf ("%s", string2);
  // if(strcmp(string,string2)==0)
  // {
  //      printf("\nAs palavras sao iguais \n%s \n%s\n",string,string2);

  // }else{
  // printf("\nnao sao iguais \n");
  // printf("\nprimeiro Caractere armazenado ==> %s \n",string);
  // printf("\nsegundo Caractere armazenado ==> %s \n",string2);
  // }
  int cont = 0;

  while (string[cont] == string2[cont])
    {

      if (string[cont] == '\0' || string2[cont] == '\0')
	break;
      ++cont;
    }


  if (string[cont] == '\0' && string2[cont] == '\0')
    {
      printf ("Sao iguais");

    }
  else
    {
      printf ("Nao sao iguais");
    }
}