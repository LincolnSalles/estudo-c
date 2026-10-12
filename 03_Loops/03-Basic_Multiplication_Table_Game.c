#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int numero;

    //2x9
     while(numero!=18){
       printf("Quanto é 2 x 9? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==18){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! Tente novamente\n\n");
     }


    //3x5
     while(numero!=15){
       printf("Vamos lá! Quanto é 3 x 5? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==15){
        printf("Muito bem, você está indo bem! Próxima Pergunta:\n\n");
    } else
        printf("Você errou! Tente novamente\n\n");
     }


    //3x7
     while(numero!=21){
       printf("Vamos ver se você está sabendo mesmo. Quanto é 3 x 7? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==21){
        printf("Muito bem, você está sabendo mesmo! Vamos ver se você sabe a próxima:\n\n");
    } else
        printf("Não foi dessa vez! Vamos tentar de novo?\n\n");
     }

      //3x9
     while(numero!=27){
       printf("Agora vamos ver se você sabe. Quanto é 3 x 9? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==27){
        printf("Muito bem, você acertou de novo! Vamos ver se acerta a próxima:\n\n");
    } else
        printf("Dessa vez você errou! Vamos tentar novamente?\n\n");
     }

      //3x4
     while(numero!=12){
       printf("Vamos lá! Quanto é 3 x 4? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==12){
        printf("Olha, você sabe mesmo tabuada não é? Mas será que acerta a próxima:\n\n");
    } else
        printf("Essa é fácil! Tente novamente\n\n");
     }

         //3x6
     while(numero!=18){
       printf("Quanto é 3 x 6? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==18){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }


            //4x4
     while(numero!=16){
       printf("Quanto é 4 x 4? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==16){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }



             //4x2
     while(numero!=8){
       printf("Quanto é 4 x 2? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==8){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }


             //4x3
     while(numero!=12){
       printf("Quanto é 4 x 3? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==12){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }


                //4x6
     while(numero!=24){
       printf("Quanto é 4 x 6? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==24){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }


                //4x7
     while(numero!=28){
       printf("Quanto é 4 x 7? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==28){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }

     //4x9
     while(numero!=36){
       printf("Quanto é 4 x 9? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==36){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }

       //4x8
     while(numero!=32){
       printf("Quanto é 4 x 8? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==32){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }


       //4x10
     while(numero!=40){
       printf("Quanto é 4 x 10? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==40){
        printf("Muito bem, você acertou! Próxima Pergunta:\n\n");
    } else
        printf("Resposta incorreta! tente novamente\n\n");
     }

         //2x11
     while(numero!=22){
       printf("Essa é a última pergunta, você está quase lá.\n"
              "Quanto é 2 x 11? ");
     scanf("%d",&numero);
     while(getchar() != '\n');

      if(numero==22){
        printf("Muito bem, você Venceu!\n\n"
               "Você chegou até o fim do jogo, meu Parabéns\n\n");
    } else
        printf("Quase!\n"
               "Resposta incorreta! tente novamente\n\n");
     }

    return 0;
}
