
#include<stdio.h>
#include<locale.h>


int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    /*1. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if. */

    int numero;


    printf("Digite um número: ");
    scanf("%d",&numero);
    while(getchar() != '\n');

    if((numero%2)==0){
        printf("\nO número digitado foi %d e é um número par\n\n",numero);
        } else { printf("\nO número digitado foi %d e é um número ímpar\n\n",numero);
    }




    return 0;

}
