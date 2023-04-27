/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 1

Q5 - Desenvolva um programa que calcula a metragem quadrada de um 
terreno, usando o teste no final para criar a op��o de digitar novos 
valores sem sair do programa.

O programa dever� pedir ao usu�rio para digitar a metragem do terreno 1, 
a metragem 2 e em seguida mostrar o tamanho total do terreno em 
metros quadrados. O programa dever� perguntar ao usu�rio se ele quer 
continuar para digitar outras metragens ou encerrar o programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    
    char x;
    int m1, m2, total;

    while (x != 'F'){

        printf("Informe a metragem do terreno 1: ");
        scanf("%d", &m1);
        printf("Informe a metragem do terreno 2: ");
        scanf("%d", &m2);

        total = m1 * m2;

        printf("\nO total do terreno � de %d metros quadrados.", total);

        printf("\n\nDeseja continuar o calculo de metragem?");
        printf("\nC - Continuar.");
        printf("\nF - Fim.");
        printf("\nInforme a sua op��o: ");
        scanf("%s", &x);
        
    }

	return 0;
}