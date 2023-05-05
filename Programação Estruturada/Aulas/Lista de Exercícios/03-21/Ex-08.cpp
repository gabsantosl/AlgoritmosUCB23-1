/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 08- Escreva um programa que leia tr�s valores reais: A, B e C. 
Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C, considerando pi = 3.14159.
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, areaTRI, areaCIR, areaTRAP, areaQUAD, areaRETAN, pi = 3.14159;

	printf("\n");
	printf("Informe o valor de A: ");
	scanf("%f", &A);
	printf("Informe o valor de B: ");
	scanf("%f", &B);
	printf("Informe o valor de C: ");
	scanf("%f", &C);

	areaTRI = (A * C) / 2;
	areaCIR = pow(C,2.0) * pi;
	areaTRAP = (A + B) * C / 2;
	areaQUAD = pow(B,2.0);
	areaRETAN = A * B;

	printf("\nA �rea do tri�ngulo equivale a %.3f", areaTRI);
	printf("\nA �rea do c�rculo equivale a %.3f", areaCIR);
	printf("\nA �rea do trap�zio equivale a %.3f", areaTRAP);
	printf("\nA �rea do quadrado equivale a %.3f", areaQUAD);
	printf("\nA �rea do ret�ngulo equivale a %.3f", areaRETAN);
	printf("\n");

	return 0;
}