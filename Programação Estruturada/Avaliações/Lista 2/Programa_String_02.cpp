/*
UNIVERSIDADE CAT�LICA DE BRAS�LIA 
CURSO DE CI�NCIA DA COMPUTA��O - MATUTINO
TURMA DE ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

Q-02) INSERIR O PRIMEIRO NOME E EXIBIR QUANTOS CARACTERES
      EST�O PRESENTES.

STRINGS UTILIZADAS: 
- strlen()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	char nome[100];
  int tamanho;

  printf("Digite seu primeiro nome: ");
  scanf("%s", nome);

  tamanho = strlen(nome);

  printf("O seu nome tem %d caracteres.\n", tamanho);

  return 0;
}