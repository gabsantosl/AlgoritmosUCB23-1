/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 06- Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1,
o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, i n�mero de pe�as 2 e o valor
unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int codPECA1, quantPECA1, codPECA2, quantPECA2;
    float valorPECA1, valorPECA2, valorTOTAL;

    printf("Informe o c�digo da pe�a 1: ");
    scanf("%d", &codPECA1);
    printf("Informe a quantidade de pe�as 1: ");
    scanf("%d", &quantPECA1);
    printf("Informe o valor unit�rio de pe�as 1: ");
    scanf("%f", &valorPECA1);

    printf("\nInforme o c�digo da pe�a 2: ");
    scanf("%d", &codPECA2);
    printf("Informe a quantidade de pe�as 2: ");
    scanf("%d", &quantPECA2);
    printf("Informe o valor unit�rio de pe�as 2: ");
    scanf("%f", &valorPECA2);

    valorTOTAL = (quantPECA1 * valorPECA1) + (quantPECA2 * valorPECA2);

    printf("\nTOTAL A PAGAR = R$%.2f", valorTOTAL);
	
	return 0;
}
