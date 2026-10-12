#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    /*Exercício 1: Lendo e exibindo um caractere. Escreva um programa em C que declare uma variável do tipo char
    chamada letra. O programa deve pedir para o usuário digitar um caractere, ler esse caractere usando
    a função getchar() e depois imprimi-lo na tela usando o printf().*/

    char letra;
    printf("Digite um caractere: \n");
    letra=getchar();
    printf("O caractere digitado foi: %c\n\n",letra);
    while(getchar() != '\n');


   return 0;
}
