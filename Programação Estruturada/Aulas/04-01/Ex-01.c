/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERC�CIOS 01/04/2023

EX-01) Fa�a um programa que receba como dados de entrada um 
valor e mostre como resultado o dobro do valor digitado.

CA08
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("\nO dobro do valor � %d.", valor * 2);

    return 0;
}