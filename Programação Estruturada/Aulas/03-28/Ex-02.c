/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 28/03/2023

EXERC�CIO 2- Crie um programa que pe�a ao usu�rio para entrar com 4 notas de um aluno, 
			calcule sua m�dia e retorne o valor dessa m�dia calculada.;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float nota, media, total=0;
	
	for(i=1;i<=4;i++){
		printf("Informe a %d� nota: ", i);
		scanf("%f", &nota);
		total = total + nota;
	}
	
	media = total/4;
	
	printf("\nA m�dia do aluno �: %.2f.", media);
	
	return 0;
}
