#include <stdio.h>
#include <locale.h>

int main(void)
{
    float banana = 5.3;
    double maca = 5.35698;

    setlocale(LC_ALL,"Portuguese");
    printf("Olá é com acento\n\n");
    printf("PI é: %.2f\n\n",banana);
    printf("maca é: %.2f\n\n",maca);




    return 0;
}
