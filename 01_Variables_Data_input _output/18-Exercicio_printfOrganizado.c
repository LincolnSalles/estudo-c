#include<stdio.h>
#include<locale.h>
#include<string.h>


int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    /* - EXERCÍCIO 7 DO C PROGRESSIVO- Tabela de notas - Escreva um programa que produza a seguinte saída na tela:
ALUNO(A)          NOTA
=========         =====
ALINE              9.0
MÁRIO              DEZ
SÉRGIO             4.5
SHIRLEY            7.0             */

   printf("\nALUNO (A)        NOTA\n"
            "=========        =====\n"
            "ALINE             9.0\n"
            "MÁRIO             DEZ\n"
            "SÉRGIO            4.5\n"
            "SHIRLEY           7.0\n");



    return 0;
}
