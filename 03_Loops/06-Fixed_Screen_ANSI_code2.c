#include <stdio.h>
#include <stdlib.h> // Necessário para o system()

int main() {
    int opcao = 0;
    int pontos = 0;

    // FORÇA o Windows a ativar o suporte a códigos ANSI no terminal atual
    system("chcp 65001 > nul"); // Configura para ler acentos corretamente

    // Limpa a tela uma vez antes de começar
    printf("\033[2J");

    while (opcao != 2) {
        printf("\033[H");

        printf("====== PLACAR DE PONTOS ======\n");
        printf(" Pontuacao atual: %d \n", pontos);
        printf("==============================\n");
        printf(" 1. Ganhar +10 pontos\n");
        printf(" 2. Sair\n");
        printf("==============================\n");
        printf("Digite sua opcao: ");

        scanf("%d", &opcao);

        if (opcao == 1) {
            pontos += 10;
        }
    }

    return 0;
}

