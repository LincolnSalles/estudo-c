#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int numero;

    printf("Digite um número ");


    while(scanf("%d",&numero)==0){
     while(getchar() != '\n');
     printf("Não é um número válido: \n"
               "\nDigite um número válido ");}

    while(getchar() != '\n');
    printf("\n\nCerto, o número digitado foi: %d",numero);

    if(numero%2==0){
        printf("\n\nE esse é um número par\n\n");
    } else printf("\n\nE esse é um número ímpar\n\n");


    return 0;
}
