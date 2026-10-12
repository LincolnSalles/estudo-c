#include<stdio.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    char letra;
    char caractere;
    

    printf("Escolha uma letra: ");
    letra=getchar();
    while(getchar() != '\n');/*para limpar os possíveis caracteres que
    o usuário possa digitar no prompt com getchar */
    printf("A letra escolhida foi %c\n\n",letra);

    printf("Agora digite uma letra: ");
    caractere=fgetc(stdin);
    printf("A letra escolhida foi %c\n\n",caractere);

    return 0;
}
