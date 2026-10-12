#include<stdio.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    char nome[]="Lincoln";
    char nome_pessoa[20];
    char letra;
    char caractere;
    char tecla;
    char botao;

    printf("O nome escolhido é: %s\n\n",nome);

    printf("Agora vemos escolher um nome: ");
    scanf("%19s",nome_pessoa);//não precisou do & porque é um array de char que já é um ponteiro na memória
    while(getchar() != '\n');//se não limpar o buffer que o último enter deixou o próximo getchar vai comer esse enter e passar direto
    printf("O nome escolhido foi: %s\n\n",nome_pessoa);

    printf("Agora vamos escolher uma tecla: ");
    letra=getchar();
    printf("A letra escolhida foi %c\n\n",letra);

    printf("Agora vamos pegar outra tecla: ");
    while(getchar() != '\n');
    caractere=fgetc(stdin);
    printf("A outra tecla escolhida foi: %c\n\n",caractere);

    printf("Digite mais uma tecla: ");
    while(getchar()!='\n');
    tecla=getc(stdin);
    printf("A tecla escolhida agora foi: %c\n\n",tecla);



    return 0;
}
