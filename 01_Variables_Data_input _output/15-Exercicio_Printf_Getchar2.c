#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    /*Faça um programa que leia dois caracteres seguidos utilizando a função getchar().
    O programa deve armazenar cada um em uma variável (ch1 e ch2) e exibi-los juntos na tela.
    Atenção: Lembre-se de que o ENTER pressionado após a primeira letra também é um caractere (\n).
    Pense em como o programa pode se comportar ou como tratar isso se necessário (para este exercício básico,
    tente ler duas chamadas de getchar).*/

    char ch1, ch2;

    printf("Digite apenas uma letra: ");
    ch1=getchar();
    while(getchar() != '\n');//limpa a memória de buffer do teclado, o getchar procura caracteres e só para quando
    //encontra um enter (\n)
    printf("\n\nOk, agora digite mais uma letra: ");
    ch2=getchar();
    while(getchar() != '\n');

    printf("\n\nCerto, as letras digitadas foram: %c e %c.\n\n",ch1,ch2);


   return 0;
}
