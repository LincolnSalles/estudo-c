#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    char nome_cachorro[20];
    char nome[20];
    char up;
    char tecla;

    printf("Qual o seu nome? "); scanf("%19s",nome);/*se o char nome é um array de char definido com 20 bytes, então
    não devemos escrever o & antes do nome dentro do scanf como &nome, porque um array de char já é um ponteiro guardado
    na memória e seria redundante. Apenas deveríamos usar o &nome dentro do scanf se o char fosse: char nome;   , nesse caso
    seria uma variável de char do tipo de 1 byte que o & do tipo que o scanf espera para guardar no ponteiro de memória*/
    printf("Então seu nome é %s?\n\n",nome);

    printf("E qual o nome do seu cachorro? ");
    scanf("%19s",nome_cachorro);/* o 19 entre o % e o c força o programa a ler apenas 19 caracteres digitados pelo usuário,
    se o usuário digitar 25 caracteres o programa só lerá até o 19, porque o último está reservado para o \0 que é
    o marcador que marca o fim do array de char. Se não fizermos isso corre o risco de o usuário digitar um nome maior
    do que tem espaço no array de char e vai sobrescrever outras variáveis ou partes do programa e dar erro.*/
    printf("Ah sim, seu cachorro se chama %s\n\n",nome_cachorro);

    printf("E qual tecla você aperta para ir pra cima? ");
    getchar();/* Esse getchar invisível "come" o Enter que sobrou do scanf anterior, senão o getchar vai interpretar que
    o enter que estava na memória que foi descartado pelo printf foi a tecla pressionada e simplesmente a impressão
    que vai ficar é que o getchar não  funciou, que passou direto, mas é que ele já capturou o caractere antes de digitarmos,
    ou seja o \n que representa o enter.*/
    up = getchar();
    printf("Ah, bom saber que %c é a tecla certa para subir\n\n",up);

    printf("Aperte uma tecla: ");
    tecla=getchar();




    return 0;
}
