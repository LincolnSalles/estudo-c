#include <stdio.h>
#include <stdlib.h> // Necessário para usar o system()

int main() {
    int opcao = 0;
    int voltas = 0;

    while (opcao != 3) {
        // 1. Limpa a tela antes de desenhar o menu
        // Use "clear" se estiver no Linux ou Mac
        system("cls");

        // 2. Desenha a tela "estática"
        printf("=================================\n");
        printf("        MENU PRINCIPAL           \n");
        printf("=================================\n");
        printf(" O programa ja rodou %d vezes.\n", voltas);
        printf("---------------------------------\n");
        printf(" 1. Avancar mais uma vez\n");
        printf(" 2. Resetar contador\n");
        printf(" 3. Sair\n");
        printf("=================================\n");
        printf("Escolha uma opcao e aperte Enter: ");

        scanf("%d", &opcao);

        // 3. Lógica do seu programa usando condicionais
        if (opcao == 1) {
            voltas++;
        } else if (opcao == 2) {
            voltas = 0;
        }
    }

    printf("Programa encerrado!\n");
    return 0;
}

