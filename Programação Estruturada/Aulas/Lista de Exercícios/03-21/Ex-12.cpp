/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 12- Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma 
comiss�o calculada de acordo com o valor de suas vendas. Se o valor da venda de 
um corretor for maior que R$ 50.000.00 a comiss�o ser� de 12% do valor vendido. Se 
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo 
extremos) a comiss�o ser� de 9.5%. Em qualquer outro caso, a comiss�o ser� de 7%. 
Escreva um algoritmo que gere um relat�rio contendo nome, valor da venda e 
comiss�o de cada um dos corretores. O relat�rio deve mostrar tamb�m o total de 
vendas da empresa.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char nome1[60], nome2[60], nome3[60];
	float valor1, valor2, valor3, comissao1, comissao2, comissao3;

	printf("===== C�LCULO DE COMISS�O =====\n");

	printf("\nInforme o seu nome: ");
	gets(nome1);
	fflush(stdin);
	printf("Informe o valor da sua venda: ");
	scanf("%f", &valor1);
	if(valor1 > 50000){
		comissao1 = valor1 * 0.12;
	}else{
		if(valor1 >= 30000 && valor1 <= 50000){
			comissao1 = valor1 * 0.095;
		}else{
			comissao1 = valor1 * 0.07;
		}
	}

	fflush(stdin);
	printf("\nInforme o seu nome: ");
	gets(nome2);
	printf("Informe o valor da sua venda: ");
	scanf("%f", &valor2);
	if(valor2 > 50000){
		comissao2 = valor2 * 0.12;
	}else{
		if(valor2 >= 30000 && valor2 <= 50000){
			comissao2 = valor2 * 0.095;
		}else{
			comissao2 = valor2 * 0.07;
		}
	}

	fflush(stdin);
	printf("\nInforme o seu nome: ");
	gets(nome3);
	printf("Informe o valor da sua venda: ");
	scanf("%f", &valor3);
	if(valor3 > 50000){
		comissao3 = valor3 * 0.12;
	}else{
		if(valor3 >= 30000 && valor3 <= 50000){
			comissao3 = valor3 * 0.095;
		}else{
			comissao3 = valor3 * 0.07;
		}
	}

	printf("\n===== RELAT�RIO DE VENDAS =====\n");

	printf("\nCorretor: %s.", nome1);
	printf("\nValor da Venda: %.2f.", valor1);
	printf("\nComiss�o Total: %.2f.\n", comissao1);

	printf("\nCorretor: %s.", nome2);
	printf("\nValor da Venda: %.2f.", valor2);
	printf("\nComiss�o Total: %.2f.\n", comissao2);

	printf("\nCorretor: %s.", nome3);
	printf("\nValor da Venda: %.2f.", valor3);
	printf("\nComiss�o Total: %.2f.\n", comissao3);

	return 0;
}