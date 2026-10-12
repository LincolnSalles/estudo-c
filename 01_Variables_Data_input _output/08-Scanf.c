#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Digite um número:");scanf("%d",&numero);
    printf("O número digitado foi:%d\n\n",numero);
    printf("Digite um número:");scanf("%d",&numero);
    printf("O número digitado foi:%d",numero);
    return 0;
}
