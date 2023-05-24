/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*   questC#o 08 */
#include <stdio.h>

int
main ()
{
  int i, soma = 0, A[5];

  for (i = 0; i < 5; i++)
    {
      printf ("digite %i valor\n", i + 1);
      scanf ("%i", &A[i]);


    }
  for (i = 0; i < 5; i++)
    {
      soma = soma + A[i];


    }
  printf ("O valor da soma = %i: ", soma);
}
