/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 28/03/2023

EXERC�CIO 1- Imprimir na tela um n�mero de 1 a 10 usando a estrutura de repeti��o - for;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=1;i<=10;i++){
		printf("%d\n", i);
	}
	
	return 0;
}
