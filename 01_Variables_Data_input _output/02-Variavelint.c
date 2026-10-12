#include<stdio.h>
#include<locale.h> // incluímos a biblioteca de idioma


int main (void)
{
   //Avisamos ao C pra usar as regras de caractere do Português
   setlocale(LC_ALL, "Portuguese");

   int banana = 20;
   int laranja = 10;

   printf("O total de Bananas é: %d\n",banana);

   return 0;

}




