/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERC�CIOS 01/04/2023

EX-02) Fa�a um programa que receba como dados de entrada 
dois valores e mostre como resultado as 4 opera��es matem�ticas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("\nSOMA = %d.", valor1 + valor2);
    printf("\nSUBTRA��O = %d.", valor1 - valor2);
    printf("\nMULTIPLICA��O = %d.", valor1 * valor2);
    printf("\nDIVIS�O = %d.", valor1 / valor2);

    return 0;
}