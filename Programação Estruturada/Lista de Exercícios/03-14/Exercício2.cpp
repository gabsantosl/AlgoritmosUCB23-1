/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERC�CIOS 14/03/2023

EXERC�CIO 02- Um programa que calcule a �rea do tri�ngulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");

	float base, altu, area;
	
	printf("\n========= �rea do tri�ngulo =========\n");

	printf("\nInforme o valor da base do tri�ngulo: ");
	scanf("%f", &base);
	printf("Informe o valor da altura do tri�ngulo: ");
	scanf("%f", &altu);

	area = (base+altu)/2;

	printf("\nA �rea do tri�ngulo equivale a %.2fcm.\n", area);
	
	return 0;
}