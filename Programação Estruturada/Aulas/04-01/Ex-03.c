/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERC�CIOS 01/04/2023

EX-03) Crie um programa para verificar se o n�mero � par
ou impar. Utilize a estrutura de sele��o.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor % 2 == 0){
        printf("\nO n�mero informado � PAR.");
    }else{
        printf("\nO n�mero informado � �MPAR.");
    }

    return 0;
}