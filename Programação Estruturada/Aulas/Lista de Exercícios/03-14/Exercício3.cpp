/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERC�CIOS 14/03/2023

EXERC�CIO 03- Fa�a um programa que recebe a idade de uma pessoa e se a idade for menor que 30 aparece a
			  mensagem "Voc� � muito jovem".  Caso a idade for maior que 30 anos, o programa n�o far� nada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;

	printf("\nInforme a sua idade: ");
	scanf("%d", &idade);

	if(idade<30){
		printf("\nVoc� � muito jovem.\n");
	}
	
	return 0;
}