/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 16/05/23

EX-01) 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	
	double y = 20.50;
	
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	printf("Endere�o x = %i - Valor x = %i", pX, *pX);
	printf("\nEndere�o y = %e - Valor y = %e", pY, *pY);
	printf("\nEndere�o z = %c - Valor z = %c", pZ, *pZ);
	
	return 0;
}
