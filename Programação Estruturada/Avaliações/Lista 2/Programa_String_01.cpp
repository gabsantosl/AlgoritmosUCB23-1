/*
UNIVERSIDADE CAT�LICA DE BRAS�LIA 
CURSO DE CI�NCIA DA COMPUTA��O - MATUTINO
TURMA DE ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

Q-01) INSERIR O NOME DO TIME DE FUTEBOL FAVORITO E EXIBIR
      O NOME INFORMADO.

STRINGS UTILIZADAS: 
- gets()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

  char string[100];

  printf("Digite o nome do seu time de futebol favorito: ");
  gets(string);

  printf("O seu time de futebol favorito �: %s\n", string);

	return 0;
}