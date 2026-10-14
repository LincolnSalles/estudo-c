#include<stdio.h>
#include<windows.h> // para o Sleep
#include<stdlib.h> // system

int main(void){

// -------Exercicio-----------------------
// 1. O Contador Regressivo: Peça um número ao usuário e faça o while contar de trás para frente até zero, 
//    usando o Sleep para esperar 1 segundo entre cada número (simulando um cronômetro de bomba).
//--------------------------------------------------------
    system("chcp 65001 > nul "); // forçar UTF* e ANSI

	int numero=1;

	printf("Digite um número para a contagem regressiva: ");
	scanf("%d",&numero);
	while(getchar() != '\n'); // limpar o buffer

	while(numero>=0){
		printf("\033[1A\033[1;46H\033[K"); // [1A sobe uma linha, [1;46H linha 1 coluna 46, [K apaga a linha atual depois do cursor
		printf("%d",numero);
		Sleep(400); // pausa de 2 milissegundos a cada decremento
		numero--;


	} // fim loop

    printf("\n\nO contador chegou ao fim\n\n");
}


