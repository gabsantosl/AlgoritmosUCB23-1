/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 07- Fa�a um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor
de seu raio (R). A f�rmula para calcular o volume �: (4/3) * pi * R3. Considere pi = 3.14159. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int raio;
    float volume, pi = 3.14159;

    printf("Informe o raio da esfera: ");
    scanf("%d", &raio);

    volume = (4.0/3.0) * pi * pow(raio,3.0); //pow(x,y) = power 

    printf("\nO volume da esfera corresponde a %.3f.", volume);
	
	return 0;
}