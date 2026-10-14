#include<stdio.h>
#include<windows.h> // para o Sleep
#include<stdlib.h> // system

int main(void){

// -------Exercicio-----------------------
// 3. Somador Infinito: O programa pede números ao usuário dentro de um while. Ele vai somando todos eles. 
//	Se o usuário digitar 0, o loop para e mostra o resultado da soma de todos os números digitados.
//--------------------------------------------------------
  
  system("chcp 65001 > nul"); // UTF8 e ANSI

  int numero=0;
  int numero_digitado=0;

  
  	printf("Digite um número diferente de 0: ");
  	while(scanf("%d",&numero_digitado) != 1 || numero_digitado==0){
     while(getchar() != '\n');
     printf("\nVocê não digitou um número válido\n\n");
     printf("Digite um número diferente de 0: "); 
    }
  	
  	printf("\n\nO número digitado foi: %d\n\n",numero_digitado);
  	numero+=numero_digitado;

    while(1){ // Loop principal
    	printf("Digite mais um número diferente de 0 para somar ao que digitou antes.\n" 
    		   "Ou digite 0 para terminar a contagem: \n");
  	    while(scanf("%d",&numero_digitado)!= 1){
         while(getchar() != '\n'); 
         printf("Você não digitou um número válido");
        }
  	    


  	    if(numero_digitado!=0){
        numero+=numero_digitado;
  	    printf("\nO número digitado foi: %d e a soma dos números digitados foi: %d\n\n",numero_digitado,numero);
  	    }
  	    
  	    else{
  	    	printf("Fim do teste");
  	    	break; // termina o loop
         
  	    }
  } // fim do loop


}


