#include <stdio.h>
#include <string.h>
#include <string.h>

#define TAM 50
#define TAN 50

int main ()
{

  char String1[TAM], String2[TAN];

  printf ("Primeira string:");
  scanf ("%s",String1);
  printf ("Segunda string:");
  scanf ("%s",String2);

  printf ("\n\tSem strcat\n");
  printf ("Cocatenacao da STRING 1 c/ STRING 2:%s%s\n", String1, String2);

  printf ("\n\tCom strcat\n");
  strcat (String1,String2);

  printf ("Cocatenacao da STRING 1 c/ STRING 2:%s\n", String1);


}