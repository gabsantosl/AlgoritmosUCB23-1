/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 25/03/2023

EXERC�CIO 2- Crie um programa que pe�a ao usu�rio para entrar com 4 notas de um aluno, calcule
             sua m�dia aritm�tica e retorno o valor dessa m�dia calculada. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int i=1;
	float nota, soma=0, media;
    
    while (i <= 4)
    {
        printf("Informe a %d� nota do aluno: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
        i++;
    }

    media = soma/4;

    printf("\nA m�dia do aluno � %.2f.\n", media);
	return 0;
}