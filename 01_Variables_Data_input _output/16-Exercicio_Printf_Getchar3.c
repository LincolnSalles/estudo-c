#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    /*Crie um programa que peça para o usuário estruturar o início de um personagem de jogo:
    Peça a inicial do nome do personagem (use scanf ou getchar).Use o aspirador de buffer.
    Peça a quantidade de pontos de vida (HP) (número inteiro).Peça a velocidade do personagem (número real/float).I
    mprima no final uma frase organizada mostrando todos os dados formatados.*/

    char inicial_nome;
    int hp;
    float velocity;

    printf("Digite a inicial do seu nome: ");
    inicial_nome=getchar();
    while(getchar() != '\n');

    printf("Agora digite a quantidade de pontos de vida: ");
    scanf("%d",&hp);

    printf("Agora digite a velocidade do personagem: ");
    scanf("%f",&velocity);

    printf("\nEntão ficou assim:\n"
           "\nInicial do nome: %c\n\n"
           "Quantidade de pontos de vida: %d\n\n"
           "Velocidade: %.2f\n\n",inicial_nome,hp,velocity);



   return 0;
}
