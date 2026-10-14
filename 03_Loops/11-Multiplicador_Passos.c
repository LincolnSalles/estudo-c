#include<stdio.h>
#include<stdlib.h> // system
#include<windows.h> // Sleep

int main(void){

	system("chcp 65001 > nul");

	//Regra do jogo: O sistema deve pedir para o usuário escolher um número qualquer. 
//	Em seguida, o programa deve exibir o resultado desse número sendo multiplicado de 1 a 10, linha por linha.
//---------------------------------------------------------------------------------------------

    int numero=0;
    int contador=1;

	printf("Digite um número: ");
	scanf("%d",&numero);
	while(getchar()!='\n');
	while(contador<=10){
		printf("%d\n",numero*contador);
		contador++;
	}

    return 0;

}
