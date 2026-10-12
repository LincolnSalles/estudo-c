#include <stdio.h>
#include <locale.h>//carrega a biblioteca de idioma português com acento

int main (void)
{
    setlocale(LC_ALL,"Portuguese");//Locale Category: all (categoria de localidade:total), pois são várias categorias de idiomas

    printf("O tamanho da variável int é: %d\n\n",sizeof(int));//do tipo inteiro
    printf("O tamanho da variável short int é: %d\n\n",sizeof(short int));//do tipo inteiro curto
    printf("O tamanho da variável long int é: %d\n\n",sizeof(long int));//do tipo inteiro longo
    printf("O tamanho da variável unsigned int é: %d\n\n",sizeof(unsigned int));//do tipo inteiro positivo
    printf("O tamanho da variável signed int é: %d\n\n",sizeof(signed));/*do tipo positiva e negativa. não precisa escrever int
    junto com o modificador signed, ou long, short, unsigned..*/
    printf("O tamanho da variável short signed é: %d\n\n",sizeof(short signed));
    printf("O valor da variável short unsigned é: %d\n\n",sizeof(short unsigned));
    printf("O valor da variável long signed é: %d\n\n",sizeof(long signed));
    printf("O valor da variável long unsigned é: %d\n\n",sizeof(long unsigned));

    return 0;


}
