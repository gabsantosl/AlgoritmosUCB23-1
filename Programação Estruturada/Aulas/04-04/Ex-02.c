/*
Calcular a for�a digitando a massa e a celera��o e poder� tamb�m, calcular a �rea e o 
per�metro de um c�rculo, digitando o raio. Utilize a estrutura switch e do_while
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float m, a, f, raio, area, peri; 
	
	do{
		printf("Informe a opera��o que deseja realizar: ");
		printf("\n0- Sair do programa.");
		printf("\n1- Calcular a for�a do objeto.");
		printf("\n2- Calcular a �rea e o per�metro de um c�rculo.");
		printf("Op��o: ");
		scanf("%d", &op);
		
		switch(op){
			case '0':
			printf("")
		}
		
	}while(op > 0);
	
	printf("Informe a massa do objeto (em kg): ");
	scanf("%f", &m);
	printf("Informe a acelera��o do objeto (em m/s�): ");
	scanf("%f", &a);
	
	f = m * a;
	
	printf("\nA for�a do objeto � igual a %.2fN.", f);
	
	return 0;
}
