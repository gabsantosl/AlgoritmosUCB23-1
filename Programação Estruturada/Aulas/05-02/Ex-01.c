/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 02/05/23

EX-01) PEDIR AO USU�RIO PARA DIGITAR 5 NOTAS E ARMAZENAR
	   NO VETOR, CALCULAR A M�DIA E MOSTRAR O RESULTADO.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float notas[5], total, media;

	for(i=1; i<=5; i++){
		printf("Informe a %d� nota: ", i);
		scanf("%f", &notas[i]);
		
		total = total + notas[i];
	}
	
	media = total/5;
	printf("\nA sua m�dia � %.1f.", media);
	
	return 0;
}
