/* Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de 
vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% 
de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salFIXO;
	int venTOTAL;
		
	printf("\n");
	
	printf("Atribua valor � vari�vel A: ");
	scanf("%d", &A);
	
	printf("Atribua valor � vari�vel B: ");
	scanf("%d", &B);
	
	printf("Atribua valor � vari�vel C: ");
	scanf("%d", &C);
	
	printf("Atribua valor � vari�vel D: ");
	scanf("%d", &D);
	
	DIFERENCA = (A * B - C * D);
	
	printf("\nDIFEREN�A: %d\n", DIFERENCA);
	
	return 0;
}
