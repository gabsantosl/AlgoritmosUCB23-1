/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 05- Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas 
efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas 
vendas efetuadas, informar o total a receber no final do m�s. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	float salFIXO, venTOTAL, salFINAL;
	
	printf("Informe o seu nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("\nInforme o seu sal�rio: ");
	scanf("%f", &salFIXO);

	printf("Informe o dinheiro arrecadado pelas vendas efetuadas por voc� nesse m�s: ");
	scanf("%f", &venTOTAL);

	salFINAL = salFIXO + (0.15 * venTOTAL);

	printf("\nSeu sal�rio final desse m�s �: %.2f", salFINAL);
	
	return 0;
}