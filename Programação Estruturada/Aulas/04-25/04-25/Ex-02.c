/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 25/04/23

EX-01) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80];

	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("\nSauda��es, %s.\n", nome);
	system("PAUSE");
	
	return 0;
}
