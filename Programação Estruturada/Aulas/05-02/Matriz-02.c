/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 02/05/23

2) Funcionamento de matrizes usando fun��o for.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*
	linha e coluna: come�a no 0, logo, para o printf � necess�rio
	colocar um n�mero a menos que o m�ximo.
	*/
	
	//					 	   0 1 2 3 4
	int m, n, matriz[5][5] = {/*0*/ {1,2,3,4,5},
					 		  /*1*/ {6,7,8,9,10},
					 		  /*2*/ {11,12,13,14,15},
					 	   	  /*3*/ {16,17,18,19,20},
							  /*4*/ {21,22,23,24,25}};
	
	for(m=0;m<5;m++){
		for(n=0;n<5;n++){
			printf("%i\n", matriz[m][n]);
		}
	}
	
return 0;
}
