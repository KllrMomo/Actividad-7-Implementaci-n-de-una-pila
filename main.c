// Codificar un algoritmo para indicar si un enunciado es palíndromo

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 25

//int main()
{
   int p_i, p_f;
   char Palabra [MAX], caracter;
   int i;

   printf ("Introduzca la palabra (con un punto al final): ");
   scanf ("%c", &caracter);
   i = 0;

   while (i < MAX && caracter != '.')
   {
       Palabra[i] = caracter;
       i++;
       scanf("%c", &caracter);
   }

   p_i = 0;
   p_f = i - 1;

   while (p_i < p_f && Palabra [p_i] == Palabra [p_f])
   {
       p_i++;
       p_f--;
   }

   if (p_i >= p_f) printf ("La palabra es palindroma \n");
   else printf ("La palabra es no palindroma \n");

    return 0;
}
