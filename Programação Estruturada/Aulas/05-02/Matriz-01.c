/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 02/05/23

1) Funcionamento simples de matrizes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*linha e coluna: come�a no 0, logo, para o printf � necess�rio
	colocar um n�mero a menos que o m�ximo.
	*/
	//					 	   0 1 2
	int matriz[3][3] = {/*0*/ {1,2,3},
					 	/*1*/ {4,5,6},
						/*2*/ {7,8,9}};
	
	printf("%i\n", matriz[1][1]);
	
return 0;
}
