/*
MEMBROS DO GRUPO -
GABRIEL DE OLIVEIRA TOREZAN
GABRIEL TEIXEIRA VINENTE
GABRIELA DOS SANTOS LEITE

EXERC�CIO) FA�A UM PROGRAMA QUE APONTE QUANTOS ALUNOS POSSUEM PELO MENOS 
		   8 D�GITOS EM SEU NOME.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char nome[20];
	int i, cont = 1, alunos, totalOito = 0;

	printf("Quantos alunos participar�o da pesquisa? ");
	scanf("%d", &alunos);
	fflush(stdin);
	printf("\n");
	
	for(i=1;i<=alunos;i++){

		printf("Digite o nome do %d� aluno: ", cont);
		gets(nome);
		cont++;
		
		while(strlen(nome) == 0){
			printf("Entrada Inv�lida. Digite Novamente.\n\n");

			printf("Digite o nome do %d� aluno: ", cont-1);
			gets(nome);
		}

		if (strlen(nome) >= 8){
			totalOito++;
		}		
	}

	if(totalOito == 1){
		printf("\n%d aluno possui pelo menos 8 d�gitos em seu nome.\n", totalOito);
	}else if (totalOito == 0){
		printf("\nNenhum aluno possui pelo menos 8 d�gitos em seu nome.\n");
	}else{
		printf("\n%d alunos possuem pelo menos 8 d�gitos em seus nomes.\n", totalOito);
	}
	
	return 0;
}
