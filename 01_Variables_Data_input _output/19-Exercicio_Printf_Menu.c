#include<stdio.h>
#include<locale.h>
#include<string.h>


int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    /* - EXERCÍCIO 9 DO C PROGRESSIVO- 9. Menu - Elabore um programa que mostre o seguinte menu na tela:
Cadastro de Clientes
0 - Fim
1 - Inclui
2 - Altera
3 - Exclui
4 - Consulta
Opção:              */

   printf("\nCadastro de Clientes\n"
            "0 - Fim\n"
            "1 - Inclui\n"
            "2 - Altera\n"
            "3 - Exclui\n"
            "4 - Consulta\n"
            "Opção:\n\n");



    return 0;
}
