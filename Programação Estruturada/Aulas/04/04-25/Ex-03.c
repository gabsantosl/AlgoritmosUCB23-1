/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 25/04/23

EX-03) MOSTRE A IMPRESS�O DE STRING COM puts().
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80];

	printf("Digite o seu nome: ");
	gets(nome);
	
	puts("\nSauda��es, ");
	puts(nome);
	
	puts("\nputs() pula de linha sozinha.");
	puts(&nome[4]);
	
	return 0;
}
