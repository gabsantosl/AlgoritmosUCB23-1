/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 10- Fa�a um algoritmo que leia um n�mero N e imprima F1, F2 ou F3, 
   conforme a condi��o:
   1. F1, se N <= 10
   2. F2, se N > 10 e N <= 100
   3. F3, se n > 100 .
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

   int N;

	printf("Informe o valor de N: ");
   scanf("%d", &N);

   if(N <= 10){
      printf("\nF1.");
   }else if(N > 10 && N <= 100){
      printf("\nF2.");
   }else{
      printf("\nF3.");
   }

	return 0;
}