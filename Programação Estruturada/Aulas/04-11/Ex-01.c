/*
GABRIELA DOS SANTOS LEITE UC22100365

EX-01) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int a, int b){
	
	int s = a + b;
	return s;
}

int sub(int a, int b){
	
	int s = a - b;
	return s;
}
	
int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int fim = 0, n1, n2, op, resp;
	
	do{
		printf("\nDigite um valor: ");
		scanf("%d", &n1);
		printf("Digite outro valor: ");
		scanf("%d", &n2);
		
		printf("\nEscolha a opera��o: \n1- Adi��o \n2- Subtra��o");
		printf("\n\nSua Op��o: ");
		scanf("%d", &op);
		
		if(op == 1){
			resp = soma(n1, n2);
		}else if (op == 2){
			resp = sub(n1, n2);
		}
		
		printf("\nO resultado da opera��o � %d.", resp);
		
		printf("\n\nDeseja continuar a opera��o?\n0- Sim \n1- N�o");
		printf("\nSua Op��o: ");
		scanf("%d", &fim);
		
	}while(fim == 0);
	
	return 0;
}	
