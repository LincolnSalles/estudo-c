#include<stdio.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    /*1. Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor.
    Consegue criar mais de uma solução? */

    int numero1, numero2, numero3;

    printf("Digite um número: "); scanf("%d",&numero1);
    while(getchar() != '\n');

    printf("\nDigite mais um número: "); scanf("%d",&numero2);
    while(getchar() != '\n');

    printf("\nDigite mais um número: "); scanf("%d",&numero3);
    while(getchar() != '\n');

    printf("\n\nOs números digitados foram: %d, %d e %d\n\n",numero1, numero2,numero3);

    /* Quando você usa só ifs soltos:
O processador é forçado a testar todas as 6 condições, uma por uma. Mesmo se o numero1 for 100 e já for comprovadamente
o maior na linha 1, o computador ainda vai perder ciclos de clock testando se numero2 > numero1 e se numero3 > numero1.
Ele não sabe que essas opções são mutuamente exclusivas.

Quando você usa if / else if / else:
Assim que uma condição é verdadeira, o C executa o bloco e salta (instrução JMP em Assembly) por cima de todo o resto.
Se o numero1 for o maior, o processador faz 1 teste e ignora os outros 2.

Em um programa pequeno isso leva nanossegundos, mas em uma game loop rodando 60 ou 120 vezes por segundo com milhares
de checagens, economizar testes de condicionais evita quedas de taxa de quadros (FPS).

    if(numero1 > numero2 && numero1 > numero3)
        printf("O número %d é o maior número e ",numero1);
    if(numero2 > numero1 && numero2 > numero3)
        printf("O número %d é o maior número e ",numero2);
    if(numero3 > numero1 && numero3 > numero2)
        printf("O número %d é o maior número e ",numero3);
    if(numero1 < numero2 && numero1 < numero3)
        printf(" e número %d é o menor número",numero1);
    if(numero2 < numero1 && numero2 < numero3)
        printf(" e número %d é o menor número",numero2);
    if(numero3 < numero1 && numero3 < numero2)
        printf(" e número %d é o menor número",numero3);
    */ //ou outra forma de fazer

    if(numero1 > numero2 && numero1 > numero3)// testando o maior número
        printf("O número %d é o maior número e ",numero1);
    else if(numero2 > numero1 && numero2 > numero3)
        printf("O número %d é o maior número e ",numero2);
    else
        printf("O número %d é o maior número e ",numero3);


    if(numero1 < numero2 && numero1 < numero3)// testando o menor número
        printf(" e número %d é o menor número",numero1);
    else if(numero2 < numero1 && numero2 < numero3)
        printf(" e número %d é o menor número",numero2);
    else
        printf(" e número %d é o menor número",numero3);


    return 0;

}
