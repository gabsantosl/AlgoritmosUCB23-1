/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 03- Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua 
esta opera��o � vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem correspondente. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, PROD;
	
	printf("\n");
	
	printf("Atribua valor � vari�vel A: ");
	scanf("%d", &A);
	
	printf("Atribua valor � vari�vel B: ");
	scanf("%d", &B);
	
	PROD = A * B;
	
	printf("\nPROD = %d\n", PROD);
	
	return 0;
}
