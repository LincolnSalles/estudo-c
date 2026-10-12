#include <stdio.h> //incluímos a biblioteca padrão do C. standard input output
#include <locale.h> //incluímos a biblioteca de idimoa

int main (void)//intereger
{
    setlocale(LC_ALL,"Portuguese");/*sigla em inglês que significa Locale Category: ALL (categorai de localidade: todas).
    porque são várias categorias em que a linguagem C divide os idiomas */

    int macas = 20;
    printf("O número de maçãs é: %d\n",macas);
    printf("O valor do int em meu compurador é: %d\n\n",sizeof(int));/*sizeof(tipo), e troque tipo por um tipo de variavel,
    pra informar o tipo de variável*/
    printf("O número da variavel long é: %d\n\n",sizeof(long));
    printf("O número da variável short é: %d\n\n",sizeof(short));
    printf("signed %d\n",sizeof(signed));
    return 0;
}
