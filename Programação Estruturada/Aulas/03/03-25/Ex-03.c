/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 25/03/2023

EXERC�CIO 2- Crie um programa aceite infinitos n�mero e depois apresente a m�dia
             de todos eles. Coloque -1 como uma maneira de encerrar o programa. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int i=0;
	float valor, media, total;
    
    printf("Informe um valor (Digite -1 para encerrar o programa): ");
    scanf("%f", &valor);

    while (valor != -1)
    {
        printf("Informe um valor (Digite -1 para encerrar o programa): ");
        scanf("%f", &valor);
        media = media + valor;
        i++;
    }

    total = media/i;

    printf("\nA m�dia dos valores � %.2f.\n", total);
	return 0;
}