#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre 
elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, SOMA;
	
	printf("\n");
	
	printf("Atribua valor � vari�vel A: ");
	scanf("%d", &A);
	
	printf("Atribua valor � vari�vel B: ");
	scanf("%d", &B);
	
	SOMA = A +B;
	
	printf("\nSOMA: %d\n", SOMA);
	
	return 0;
}
