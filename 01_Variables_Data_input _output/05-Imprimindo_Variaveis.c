#include<stdio.h>
#include<locale.h>

int main(void)
{
    int linguica = 20;
    int garrafas = 10;
    float velocity = 3.15;
    short int idade = 40;

    setlocale(LC_ALL,"Portuguese");
    printf("Olá!!\n\n");
    printf("A Quantidade de Linguiças são %d\n\n",linguica);
    printf("A velocidade é de %f\n\n",velocity);
     printf("A velocidade é de %.2f\n\n",velocity);//aqui definimos a quantidade de casas decimais pra duas com %.2f
    garrafas = 30;
    printf("A quantidade de garrafas é igual a \"%d\"\n\n",garrafas);
    printf("A quantidade de garrafas menos linguica é de %d\n\n",(garrafas-linguica));// podemos somar dentro do próprio printf
    printf("O tamanho do inteiro do meu computador é %d\n\n",sizeof(int));// sizeof informa o tamanho do tipo de variável ocupa na memoria
    printf("O tamanho do float do meu computador é %f\n\n",sizeof(float));
    printf("%d\n\n",sizeof(short int));


    return 0;
}
