#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // OBRIGATÓRIA para destravar as cores no Windows

int main() {


    int opcao = 0;
    int pontos = 0;

    // Limpa a tela inteira uma única vez antes do jogo começar
    system("mode con: cols=80 lines=25");
    printf("\033[2J");

    while (opcao != 2) {
        // Move o cursor de volta para o topo (canto superior esquerdo)
        printf("\033[H");

        // Desenha o menu com CORES avançadas usando printf!
        printf("\033[33m====== PLACAR DE PONTOS ======\033[0m\n"); // Amarelo
        printf(" Pontuação é atual: \033[1;32m%d pontos\033[0m \n", pontos); // Negrito + Verde
        printf("\033[33m==============================\033[0m\n");
        printf(" 1. Ganhar +10 pontos\n");
        printf(" 2. Sair do Jogo\n");
        printf("\033[33m==============================\033[0m\n");
        printf("Digite sua opcao: ");

        scanf("%d", &opcao);

        if (opcao == 1) {
            pontos += 10;
        }
    }

    // Fundo vermelho com texto branco ao sair
    printf("\n\033[41;37m JOGO ENCERRADO! \033[0m\n\n");
    return 0;
}
