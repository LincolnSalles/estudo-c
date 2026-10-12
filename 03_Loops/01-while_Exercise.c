#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int numero=1;
//imprimir de 1 a 10 na tela
    while(numero<=10){
        printf("%d\n",numero);
        numero++;
    }



    return 0;
}
