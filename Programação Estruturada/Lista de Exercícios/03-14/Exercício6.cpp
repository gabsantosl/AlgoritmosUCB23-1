/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERC�CIOS 14/03/2023

EXERC�CIO 06- Fa�a um algoritmo receber um valor inteiro e se o n�mero for maior que 10, ser� impressa
			  a frase: "O n�mero � maior que 10.". Se o n�mero for menor que 10, ser� impressa a frase:
			  "O n�mero � menor que 10.". Se o n�mero for igual a 10 aparecer� a frase: "Voc� acertou".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;

	printf("\nInforme um algoritmo: ");
	scanf("%d", &num);

	if(num > 10){
		printf("\nO n�mero � maior que 10.");
	}else{
		if(num < 10){
			printf("\nO n�mero � menor que 10.");
		}else{
			printf("\nVoc� acertou!");
		}
	}
	
	return 0;
}