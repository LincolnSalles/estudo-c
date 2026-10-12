#include<stdio.h> // biblioteca padrão que cuida estritamente de entrada e saída de dados
#include<stdlib.h> //  numeros aleatórios rand() e srand(), system, etc
//#include<locale.h> // Para ler caracteres com acento
#include<time.h> // para time()



int main(void)
{
    //setlocale(LC_ALL,""); //Localizar a biblioteca de acentua��o gr�fica do idioma do pc do usu�rio
    srand(time(NULL)); //Inicia a semente do gerador de n�meros aleat�rios com base no rel�gio do windows
    //setlocale(LC_ALL,""); // localiza o idioma padr�o do computador e faz aceitar acentos
    system("mode con: cols=80 lines=25"); /*Define o tamanho da tela / system - mode � um comando nativo do windows usado
    para configurar dispositivos do sistema, como a tela do console*/
    system("chcp 65001 > nul"); /*For�a o windows a ativar c�digos ANSI (pintar as letras e mover o cursor para o in�cio para
   simular tela fixa est�tica, e tamb�m ler acentos corretamente com UTF8 (mas n�ao l� os acentos aqui me for�ando a usar o locale)*/
    //system("color f0"); // system("color XY"); x � a cor do fundo, e y a cor da letra


    int numero_digitado, resultado, num0a10;//numero_digitado � o n�mero que o usu�rio digita, a resposta.
    //resultado � o resultado da opera��o matem�tica do n�mero digitado * num1a9 (n�mero aleat�rio de 0 a 10) correspondente
    // a tabuada
    int dois_tres, quatro_cinco=((rand()%2)+4), seis_sete=((rand()%2)+6), oito_nove=((rand()%2)+8);
    int porcentagem=(rand()%100)+1; /*para calcular a porcentagem de 1 a 100 que os n�meros da tabuada v�o aparecer. Uns
   v�o aparecer mais que outros.*/
    int perguntas = 0; // contador de perguntas por rodada. Cada rodada foi definida para 20 peguntas por rodada.(contador<20)
    int score = 0;


     //Iniciando o Level 1 - Tabuada de 2 e 3 --- 20 perguntas
     while(perguntas<20){  //enquanto as perguntas (que vai marcar vinte rodadas) forem menores que 20 a rodada continua
    //2 ou 3 * (0,1,2,3,4,5,6,7,8,9,10)
       num0a10=(rand()%11); //gera um n�mero de 0 a 10 para ser multiplicado por dois_tres (que ser� o n�mero 2 ou 3)
       dois_tres=((rand()%2)+2); // alterna para o n�mero 2 ou 3 a cada pergunta rodada
       resultado = dois_tres*num0a10; // vai multiplicar o 2 ou 3 por um n�mero de 0 a 10
       printf("Quanto é %d x %d? ",dois_tres,num0a10);
       scanf("%d",&numero_digitado);
       while(getchar() != '\n');

         if(numero_digitado==resultado){
          perguntas++; // acrescenta +1 ao contador. O objetivo � chegar at� 20 para s� ent�o mudar de rodada.
          printf("Muito bem, voc� acertou! Pr�xima Pergunta:\n\n");
    }    else{
           printf("Resposta incorreta! Tente novamente\n\n");
           while(numero_digitado!=resultado){
            //se o resultado for diferente do n�mero digitado
             printf("Quanto � %d x %d? ",dois_tres,num0a10);
             scanf("%d",&numero_digitado);
               while(getchar() != '\n');
             if(numero_digitado==resultado){
                 perguntas++; // acrescenta +1 ao contador. O objetivo � chegar at� 20 para s� ent�o mudar de rodada.
                 printf("Muito bem, agora voc� acertou! Pr�xima Pergunta:\n\n");
    }          else
                 printf("Resposta incorreta! Tente novamente\n\n");
              }
           }

     }



    return 0;
}
