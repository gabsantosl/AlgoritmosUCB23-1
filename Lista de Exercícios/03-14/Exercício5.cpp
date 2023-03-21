/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERC�CIOS 14/03/2023

EXERC�CIO 05- Fa�a um programa em C que leia a nota final, o total de presen�as e o n�mero total de aulas ministradas e 
		      imprima a nota final, o total de presen�as e uma mensagem dizendo se este aluno foi aprovado ou reprovado.
			  Sabe-se que a frequ�ncia necess�ria � de no m�nimo 75% das aulas ministradas e que a nota m�nima deve ser 
			  maior ou igual a 6.0.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int aulaPres, aulaTotal;
	float notaFin, aulaDif;

	printf("\nInforme a sua nota final: ");
	scanf("%f", &notaFin);
	printf("\nInforme o total de aulas ministradas: ");
	scanf("%d", &aulaTotal);
	printf("Informe o total de aulas comparecidas: ");
	scanf("%d", &aulaPres);

	aulaDif = 0.75 * aulaTotal;

	printf("\n============================================================\n");

	if(aulaPres >= aulaDif && notaFin >= 6.0){ //erro no c�digo enviado "notaFin > 6.0" quando devia ser "notaFin >= a 6.0"
		printf("\nNota Final: %0.2f.\nTotal de aulas ministradas: %d.\nTotal de aulas comparecidas: %d.\n", notaFin, aulaTotal, aulaPres);
		printf("\nVoc� foi Aprovado.\n");
	}else{
		printf("\nNota Final: %0.2f.\nTotal de aulas ministradas: %d.\nTotal de aulas comparecidas: %d.\n", notaFin, aulaTotal, aulaPres);
		printf("\nVoc� foi Reprovado.\n");
	}

return 0;
}