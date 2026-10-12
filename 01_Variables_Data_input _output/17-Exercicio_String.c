#include<stdio.h>
#include<locale.h> // biblioteca para incluir acentos da língua portuguesa
#include<string.h>//para usar funções para manipular strings, mas ainda não estou usando aqui, pra ir acostumando

int main (void)
{
    setlocale(LC_ALL,"Portuguese"); //a função que chama o idioma português com os acentos

    /* EXERCÍCIO - Etiqueta - Elabore um programa que pede seu nome, endereço, CEP e telefone.
    Ele deve imprirmir seu nome completo na primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.*/

    char nome[50];
    char endereco[100];
    char cep[30]; char telefone[40]; /* Por que variavel do tipo array o char e não int? Um CEP ou telefone não são uma grandeza
    matemática, mas sim um código de identificação textual formado por dígitos. Na matemática do computador, o número 04538
    tem o mesmo valor que 4538.
    Se você armazenar um CEP que começa com zero em uma variável int, o compilador eliminará automaticamente o zero inicial,
    alterando completamente o endereço original. O formato de leitura visual de um CEP frequentemente inclui um traço
    (como 01001-000). Uma variável int só tem capacidade estrutural para armazenar valores numéricos puros. Ela causaria
    um erro de compilação ao tentar ler um hífen, que só pode ser armazenado em um espaço de memória reservado para
    caracteres (char).  Na engenharia de software, só utilizamos variáveis numéricas (int, float) para dados que sofrerão
    operações matemáticas. Você nunca vai somar, subtrair ou calcular a média entre dois CEPs, números de telefone ou CPFs.
    Eles são estritamente identificadores de texto.*/


    printf("Olá, informe por favor seu nome: ");
    scanf("%49[^\n]",nome);/*"%49" colocar o número 49 depois do % limita a leitura de apenas 49 caracteres e edpaço final para
    o \0 , já que o array de char nome está configurado para ir até 50. O [] é um modificador da regra do scanf, substitui o
    %s ou %d ou %c ou %f padrão. Ele não vai mais ler apenas dados desses tipos e ignoras os outros, ele vai ler apenas o
    que eu estipular dentro desses []. E estipulamos que ele vai ler tudo (incluindo espaços, sim) e só vai parar quando encontrar
    um \n (que é um enter). Isso significa que agora nosso scanf pode finalmente ler espaços, traços e tudo mais até que encontre
    um \n). */
    while(getchar() != '\n'); /* Isso é um modo de limpar o buffer, porque o scanf anterior não captura o \n (enter), ele
    deixa solto na memória do teclado ( o buffer do stdin (teclado)) , e precisa ser limpo, caso contrário a linha vai pular
    sozinha quando o usuário for digitar alguma coisa ou vai comer o que o usuário digitar ou outros bugs. while é um loop
    que funciona enquanto a condição dentro dos parênteses for verdadeira. Usamos o getchar e dizemos que enquanto o
    caractere que o getchar pegar for diferente de \n, então ele continua e passa pro próximo caractere. Isso é bom porque se
    houver caracteres a mais que o usuário possa ter digitado, como um nome gigante de 100 letras, mesmo a gente limitando
    para 50, o scanf anterior só vai pegar 49 caracteres + \0 , mas essas 50 caracteres ficarão soltos no buffer do teclado
    causando estouro de memória a longo prazo. vai sobrescrever novas entradas de dados que o usuário nem vai conseguir digitar
    mais. esse getchar vai limpando todos esses caracteres até encontrar o \n. Quando ele finalmente encontra o \n, ele pega ele
    e termina a limpeza, ele finalmente para. porque agora o resultado foi negativo, o while pergunta ao getchar: o próximo
    caractere é um \n? o getchar diz: sim. o while só continuaria rodando enquanto o resultado for positivo, isso é,
    diferente de (!= \n). */

    printf("\nAgora informe por favor seu endereço: ");
    scanf("%49[^\n]",endereco);
    while(getchar() != '\n');

    printf("\nInforme por favor seu CEP: ");
    scanf("%19[^\n]",cep);/* Por ser uma string de char, não precisa usar o & dentro do scanf (&cep), porque a string já
    está gravada na memória do array*/
    while(getchar() != '\n');

    printf("\nE por fim, informe por favor seu telefone: ");
    scanf("%19[^\n]",telefone);
    while(getchar() != '\n');

    printf("\n\nPronto, sua etiqueta está pronta: \n\n");
    printf("Nome:%s\n",nome);
    printf("Endereço:%s\n",endereco);
    printf("CEP: %s e Telefone: %s\n\n",cep,telefone);




    return 0;
}
