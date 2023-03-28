/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 28/03/2023

SWITCH CASE -  Descobrir o desconto que um cliente ter� de acordo com a escolha de uma 
			   cor espec�fica:
					AZUL - 30% de desconto;
					VERMELHO - 20% de desconto;
					BRANCO - 10% de desconto;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	float valor, desc, total;
	
	printf("\nDigite o valor da compra: ");
	scanf("%f", &valor);
	
	printf("\nDigite a letra que representa o seu desconto de acordo com a cor:\n");
	printf("A - Azul\n");
	printf("V - Vermelho\n");
	printf("B - Branco\n");
	
	printf("\nQual � a sua op��o: ");
	scanf("%s", &c);
	
	switch (c)	
	{
		case 'a': 
		printf("Sua escolha foi: Azul. Voc� ter� 30 porcento de desconto.\n");
		desc = valor * 0.30;
		total = valor - desc;
		break;
		case 'v': 
		printf("Sua escolha foi: Vermelho. Voc� ter� 20 porcento de desconto.\n");
		desc = valor * 0.20;
		total = valor - desc;
		break;
		case 'b': 
		printf("Sua escolha foi: Branco. Voc� ter� 10 porcento de desconto.\n");
		desc = valor * 0.10;
		total = valor - desc;
		break;
		default: 
		printf("Escolha Invalida. Nenhum desconto ser� aplicado.\n");
		total = valor;
		break;
	}
	
	printf("\nO valor da sua compra ser�: R$%.2f.", total);
	
	return 0;
}
