#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    char up='W',right='D',left='A',down='S';//podemos declarar as variáveis do mesmo tipo uma do lado da outra e separar por vírgula
    char nome[]="Lincoln";
    int banana=20, maca=50, pera=45, uva=80;//variáveis do mesmo tipo uma do lado da outra e separar por vírgula
    int idade; //vamos usar essa para o scanf no final
    float velocidade=3.25, stamina=5.89;

    printf("A tecla para cima é: %c\n",up);//%c usa para imprimir a variável char
    printf("A tecla para baixo é: %c\n",down);
    printf("A tecla para frente é: %c\n",right);
    printf("A tecla para a esquerda é: %c\n\n",left);
    printf("O nome dele é:%s!\n\n",nome); // %s para imprimir do tipo string
    printf("%c%c%c%c%c%c%c%c\n", 70, 79, 68, 65, 45, 83, 69, 10);/*outra forma de escrever direto com os códigos ascii sem
    declarar variáveis de char*/
    printf("\106\117\104\101\055\123\105\012\n");/*ou com os códigos octal da tabela ascii com a barra invertida, nem precisa
    digitar os %c*/
    printf("\x46\x4F\x44\x41\x2D\x53\x45\x0A\n");/* com os códigos hexadecimais da tabela ascii precisa coloca o \x na frente
    do código numérico e também não precisa digitar o %c.*/
    printf("A quantidade de bananas é:%d\nA quantidade de Maçãs é:%d\nA Quantidade de Peras é:%d\n"
           "A quantidade de Uvas é:%d\n",banana,maca,pera,uva); //%d usa para imprimir a variável do tipo int - inteiro
    printf("A velocidade é:%.2f\nA Stamina é:%.2f\n\n",velocidade,stamina); // %f para imprimir do tipo float
    printf("Agora queremos saber de você, qual a sua idade? "); scanf("%d",&idade);
    printf("\nBem, agora sabemos sua idade, que é:%d\n",idade);

    return 0;
}
