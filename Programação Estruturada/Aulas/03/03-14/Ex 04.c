#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio
	
	M�dia maior ou igual a 7: APROVADO
	M�dia maior ou igual a 5 e menor que 7: RECUPERA��O	
	M�dia menor que 5: REPROVADO
	
*/

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf("Digite a primeira a nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite a primeira a nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf("\n==============================\n");
	
	printf("\nSua m�dia �: %0.2f", media);
	
	if(media>= 7){
		printf("\nVoc� est� APROVADO!");
	}else{
		if(media >= 5){
			printf("\nVoc� est� em RECUPERA��O!");
		}else{
			printf("\nVoc� est� REPROVADO!");
		}
	}
	
	return 0;
}
