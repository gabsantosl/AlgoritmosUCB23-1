/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERC�CIOS 04/04/2023

EX-02) Calcular a for�a digitando a massa e a celera��o e poder� tamb�m, calcular a �rea 
e o per�metro de um c�rculo, digitando o raio. Utilize a estrutura switch e do_while.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float m, a, f, raio, area, peri; 
	
	do{
		printf("\nInforme a opera��o que deseja realizar: ");
		printf("\n0- Sair do programa.");
		printf("\n1- Calcular a for�a do objeto.");
		printf("\n2- Calcular a �rea e o per�metro de um c�rculo.");
		printf("\n\nOp��o: ");
		scanf("%d", &op);
		
		switch (op){

			case 0:
			printf("\nSaindo...");
			break;

			case 1:
			printf("\nInforme a massa do objeto (em kg): ");
			scanf("%f", &m);
			printf("Informe a acelera��o do objeto (em m/s�): ");
			scanf("%f", &a);

			f = m * a;

			printf("\nA for�a do objeto � igual a %.2fN.\n", f);
			break;

			case 2:
			printf("\nInforme o raio do c�rculo (em m): ");
			scanf("%f", &raio);

			area = 3.14 * (raio * raio);
			peri = 2 * 3.14 * raio;

			printf("\nA �rea do c�rculo � %.2fm�.", area);
			printf("\nO per�metro do c�rculo � %.2fm.\n", peri);
			break;

			default:
			printf("Op��o invalida.\n");
			break;
		}

	}while(op != 0);
	
	return 0;
}
