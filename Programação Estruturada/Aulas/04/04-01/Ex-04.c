/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERC�CIOS 01/04/2023

EX-03) Fa�a um programa que receba como dados de entrada 3 n�meros
inteiros e mostre como resultado qual o maior n�mero digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    if(valor1 > valor2 && valor1 > valor3){
        printf("\nO maior valor digitado � %d.", valor1);
    }else{
        if(valor2 > valor1 && valor2 > valor3){
            printf("\nO maior valor digitado � %d.", valor2);
        }else{
            if(valor3 > valor1 && valor3 > valor2){
                printf("\nO maior valor digitado � %d.", valor3);
            }else{
                printf("\nErro.");
            }
        }
    }
        
    return 0;
}