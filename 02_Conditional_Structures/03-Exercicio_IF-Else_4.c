#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    /*Desafio 1. Crie um programa em C que peça um número ao usuário e armazene ele na variável x. Depois peça outro número e
    armazene na variável y. Mostre esses números. Em seguida, faça com que x passe a ter o valor de y,
    e que y passe a ter o valor de x. Dica: você vai precisar usar outra variável. */

    int x;
    int y;
    int provisorio;

    printf("Digite uma valor para x: ");
    scanf("%d",&x);
    while(getchar() != '\n');

    printf("\n\nDigite uma valor para y: ");
    scanf("%d",&y);
    while(getchar() != '\n');

    printf("O valor de x ficou %d e o de y ficou %d\n",x,y);
    provisorio=x;
    x=y;
    y=provisorio;

    printf("Agora vamos inverter os valores, o valor de x será %d e o valor de y será %d\n\n",x,y);





    return 0;

}
