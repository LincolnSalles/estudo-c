#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    /* Desafio 3. Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto,
ficou de recuperação ou foi reprovado na matéria. A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto */

    float nota;

    printf("Qual nota o fulano tirou na prova? ");


    if(scanf("%f",&nota)!=1){
        printf("\n\nVocê não digitou um número válido\n\n");
        while(getchar() != '\n');
    }
      else if(nota>=7){
        printf("\n\nA nota foi %.2f, nesse caso ele passou direto",nota);
    } else if(nota>=4 && nota<7){
        printf("\n\nA nota foi %.2f, nesse caso ele tem direito de fazer uma prova de recuperação",nota); }
      else if(nota<4){
        printf("\n\nA nota foi %.2f, nesse caso ele está reprovado",nota);
      }


    return 0;

}
