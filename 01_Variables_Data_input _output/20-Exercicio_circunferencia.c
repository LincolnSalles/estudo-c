
#include<stdio.h>
#include<locale.h>


int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    /*3. Escreva um programa que pergunte o raio de uma circunferência, e sem seguida mostre o diâmetro,
    comprimento e área da circunferência. */

    float raio;

    printf("Digite um raio de circunferência: ");
    scanf("%f",&raio);
    while(getchar() != '\n');

    printf("\n\nO raio da circunferência digitado foi: %.2f",raio);
    printf("\nO diâmetro da circunferência é: %.2f",raio*2);
    printf("\nO Comprimento da circunferência é: %.2f",raio*2*3.14);
    printf("\nA área da circunferência é: %.2f",raio*raio*3.14);





    return 0;

}
