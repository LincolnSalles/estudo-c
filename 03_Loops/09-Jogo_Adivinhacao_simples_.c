#include <stdio.h>
#include <stdlib.h> // system, rand, srand
#include <time.h>   // time
#include <windows.h> // para o Sleep

//2. O Jogo da Adivinhação Curto: O computador gera um número aleatório de 1 a 10. 
//O jogador tenta adivinhar. O while fica rodando e só para (break) se o jogador acertar.
//--------------------------------------------------------------------------------
int main(void) {
   
   system("chcp 65001 > nul"); // UTF8 e ANSI
   srand(time(NULL));

   int numero=0;
   int numero_aleatorio=1;

   printf("Tente adivinhar qual um número aleatório de 1 a 10\n"
          "Vamos embaralhar!\n");

   while(numero_aleatorio!=numero){
    numero_aleatorio=(rand()%10)+1;
    printf("Qual é o número? ");
    scanf("%d",&numero);
    while(getchar() != '\n'); // limpa o buffer

   while(numero < 1 || numero > 10){ // vamos testar se e um numero valido
        if(numero < 1 || numero > 10){ // testar se o numero e valido
            printf("Você não digitou um número de 1 a 10\n");
            printf("Digite um número de 1 a 10\n");
            scanf("%d",&numero);
            while(getchar() != '\n');
        } // fecha o if pra testar se o numero é valido
    } // fecho o 2 while


    if(numero_aleatorio==numero){
        printf("O número era:%d \n",numero_aleatorio);
        printf("Muito bem, você acertou!");
    }
    else {
    printf("Não é esse número, vamos embaralhar novamente!\n");
    }
   } // fecha o loop principal



    return 0;
}