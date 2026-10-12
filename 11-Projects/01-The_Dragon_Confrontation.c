#include <stdio.h>
#include <stdlib.h> // system, rand, srand
#include <time.h>   // time
#include <windows.h> // para o Sleep

int main(void) {
    // Funções de Configuração
    system("chcp 65001 > nul"); // Forçar UTF-8 e ANSI
    srand(time(NULL));          // Inicia semente baseada nos segundos do sistema
    system("mode con cols=60 lines=22"); // Define o tamanho do console

    // Variáveis Globais
    int vida_jogador = 100;
    int vida_dragao = 150;
    int turno = 1; 
    int pocao_cura = 3; 
    int opcao = 0; 
    int dano = 0;  
    int cura = 0; 
    int usou_cura=0;


    printf("\033[2J"); // Código ANSI para limpar a tela logo no inicio do jogo


    // ---------------LOOP PRINCIPAL DO JOGO---------------------------
    while (vida_jogador > 0 && vida_dragao > 0) { 

        printf("\033[H"); // Move o cursor para o inicio (0,0) para sempre redesenhar a tela no início do loop
        // e simular uma tela estática

        // REDESENHA O MENU SEMPRE QUE O TURNO RECOMEÇA
        printf(" * * * * * O CONFRONTO DO DRAGÃO * * * * *  \n");
        printf("\n Player Vida:%d  ", vida_jogador);
        printf("Dragão Vida:%d  ", vida_dragao);
        printf("Turno:%d  \n", turno);
        printf("==========================================\n");
        printf("======== Escolha uma opção: ==============\n");
        printf("    | 1 - Ataque de Espada |  Poçao \n");
        printf("    | 2 - Usar Poção       | de Cura:%d \n", pocao_cura); 
        printf("    | 3 - Sair             |    \n"); 
        printf("-----------------------------------------\n");

        opcao = 0; // Resetar Opcao. Senao a opcao estara sempre escolhida


        // TESTAR SE O USUÁRIO VAI DIGITAR 1, 2 OU 3
        // se não odigitar 1, 2 ou 3, fica preso nesse loop até digitar o numero esperado (1, 2 ou 3)
        while (opcao < 1 || opcao > 3) {
            scanf("%1d", &opcao);
            while (getchar() != '\n'); // Limpa o buffer
            printf("\033[1A\033[K"); // Sobe uma linha e apaga o que o usuário digitou

            if (opcao < 1 || opcao > 3) {
                printf("Você não escolheu um número válido, digite uma opção válida"); 
                Sleep(2000); 
                printf("\033[2K\033[10;0H"); // Apaga a frase e volta para o início da linha
            }
        }

            //----ROUND DO JOGADOR--------
        if (opcao == 1) { // Ataque de espada
            dano = (rand() % 11) + 15; 
            vida_dragao -= dano; 
            printf("Jogador fere dragão com %d", dano);

            // ATUALIZAR MENU // Alteracao do menu (apenas linha 2) em tempo real
            printf("\033[2;1H\033[2K"); // move o cursor para a linha 2 do menu e apaga a linha inteira
            printf("\n Player Vida:%d  ", vida_jogador);
            printf("Dragão Vida:%d  ", vida_dragao);
            printf("Turno:%d  \n", turno);
            printf("\033[10;0H");

            Sleep(2000); 
            printf("\033[2K\033[10;0H"); 
        } 
        // ------OPÇÃO 2: Poção de Cura---------
        else if (opcao == 2) { 
            if(usou_cura==1){ // se á usou a cura nao pode usar de novo no mesmo turno
              printf("Você não pode usar a cura duas vezes no mesmo turno");

              Sleep(2000); // pequena pausa de 2 segundos
                printf("\033[2K\033[10;0H"); // para limpar a mensagem

              continue; // ignora tudo abaixo e volta pro menu
            }
            else if (pocao_cura >= 1) { // se ainda tiver pocao de cura
                cura = (rand() % 11) + 20; // Cura entre 20 e 30
                vida_jogador += cura; 
                pocao_cura--; 
                usou_cura=1;

                printf("Você ganhou %d de cura", cura);

                // ATUALIZAR MENU
                printf("\033[2;1H\033[2K");
                printf("\n Player Vida:%d  ", vida_jogador);
                printf("Dragão Vida:%d  ", vida_dragao);
                printf("Turno:%d  \n", turno);
                printf("\033[10;0H");

                Sleep(2000); // pequena pausa de 2 segundos
                printf("\033[2K\033[10;0H"); // para limpar a mensagem

                continue; // pula o turno do dragão abaixo e deixa o jogador jogar de novo voltando para o menu
            } // fecha se ainda tiver pocao de cura
            else {
                printf("Você não tem mais poções de cura");
                Sleep(2000); 
                printf("\033[2K\033[10;0H");

                continue; // pula o turno do dragão abaixo e deixa o jogador jogar de novo
            } // fecha vc nao tem mais pocoes de cura
        } // fecha Opcao == 2

        // OPÇÃO 3: Sair
        else if (opcao == 3) {
            printf("Fim do Jogo");
           // exit(0); não vou usar isso pq sai do programa abruptamente, nao deixando ir para uma tela de fim por exemplo
        }

        // =====================================
        // ROUND DO DRAGÃO
        // =====================================
        if (vida_dragao > 0) {
            printf("Agora se prepare para o ataque do Dragão!");
            Sleep(2000); 
            printf("\033[2K\033[10;0H"); 

            dano = (rand() % 16) + 15; // Dano entre 15 e 30 no Jogador
            vida_jogador -= dano;

            // ATUALIZAR MENU
            printf("\033[2;1H\033[2K");
            printf("\n Player Vida:%d  ", vida_jogador);
            printf("Dragão Vida:%d  ", vida_dragao);
            printf("Turno:%d  \n", turno);
            printf("\033[10;0H");

            printf("Dragão fere jogador com %d", dano);
            Sleep(2000); 
            printf("\033[2K\033[10;0H"); 
            
        }

        turno++; 
        usou_cura=0;
        

    } //---------  Fim do while principal ----------------------

    // Fim de Jogo
    printf("\033[2J\033[H");
    if (vida_dragao <= 0) {
        printf("Parabéns, você matou o Dragão e restabeleceu a paz!\n");
    } else {
        printf("Você foi derrotado pelo Dragão... Fim de Jogo.\n");
    }

    return 0;
}