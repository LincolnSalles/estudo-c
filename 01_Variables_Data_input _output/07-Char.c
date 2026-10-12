#include<stdio.h>
#include<locale.h>

int main(void)
{
    char O='O',L='L',A='A';/*assim como na declaração de variáveis, podemos separar os tipos char por vírgulas
    sem precisar declarar cada uma numa linha.*/
    char C=67; //a tabela ascii que os números correspondem a letras, não precisa usar aspas depois do =
    //já que o 67 equivale a letra C

    setlocale(LC_ALL,"Portuguese");
    printf("A letra é %c%c%c\n\n",O,L,A);
    printf("Em ascii o número 67 equivale a: %c\n\n",C);

    //também podemos imprimir nomes na tela com o char sem declarar variável de char, apenas usando o código ascii
    printf("%c%c%c%c\n\n",55,65,89,78);

    //começando a conseguir desenhar coisas na tela com printf

    printf(" _____________________________  \n");
    printf("|_____________________________| #\n");
    printf("|    /                        | #\n");
    printf("|   /                         | #\n");
    printf("|  /                          | #\n");
    printf("| /                           | #\n");
    printf("|/____________________________| #\n");
    printf(" _____________________________|  \n");


    return 0;
}
