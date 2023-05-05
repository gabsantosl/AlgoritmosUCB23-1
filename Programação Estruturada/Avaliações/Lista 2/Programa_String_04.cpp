/*
UNIVERSIDADE CAT�LICA DE BRAS�LIA 
CURSO DE CI�NCIA DA COMPUTA��O - MATUTINO
TURMA DE ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

gets, puts, strlen, strcpy, srtcmp

Q-4) INSERIR USU�RIO E SENHA. O USU�RIO DEVE TER NO M�NIMO 4 CARACTERES
	 E A SENHA DEVE TER NO M�NIMO 8 CARACTERES E DEVER� SER PREENCHIDA 
	 DUAS VEZES.

STRINGS UTILIZADAS: 
- gets()
- strlen()
- strcpy()
- strcmp()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char usuario[40], senha1[30], senha2[30];

	printf("== FA�A O SEU CADASTRO ==\n\n");

	printf("Insira um nome de usu�rio: ");
	gets(usuario);

	while(strlen(usuario) != 4){
		printf("\nO usu�rio deve ter no m�nimo 4 caracteres.\n");

		printf("Insira um nome de usu�rio: ");
		gets(usuario);
	}

	printf("Insira uma senha: ");
	gets(senha1);

	while(strlen(senha1) != 8){
		printf("\nA senha deve ter no m�nimo 8 caracteres.\n");

		printf("Insira uma senha: ");
		gets(senha1);
	}

	strcpy(senha2, senha1);

	printf("Insira a senha novamente: ");
	gets(senha1);

	while(strcmp(senha2, senha1) != 0){
		printf("\nAs senhas n�o coencidem, digite novamente.\n");

		printf("Insira uma senha: ");
		gets(senha1);
	}

	printf("\n== SEU CADASTRO FOI REALIZADO COM SUCESSO ==\n");

	return 0;
}