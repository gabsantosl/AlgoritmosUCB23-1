/*
UNIVERSIDADE CAT�LICA DE BRAS�LIA 
CURSO DE CI�NCIA DA COMPUTA��O - MATUTINO
TURMA DE ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

Q-03) INSERIR O NOME DE DUAS FRUTAS E INFORMAR SE:
      - O NOME � DO MESMO TAMANHO;
      - O PRIMEIRO � MAIOR QUE O SEGUNDO;
      - O SEGUNDO � MAIOR QUE O PRIMEIRO.

STRINGS UTILIZADAS: 
- strcmp()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
char str1[50], str2[50];

printf("Digite o nome de uma fruta: ");
fgets(str1, 50, stdin);

printf("Digite o nome de uma segunda fruta: ");
fgets(str2, 50, stdin);

int resultado = strcmp(str1, str2);

if (resultado == 0) {
  printf("Os nomes das frutas s�o do mesmo tamanho.\n");
} else if (resultado < 0) {
  printf("O nome da primeira fruta � menor que o da segunda.\n");
} else {
  printf("O nome da primeira fruta � maior que o da segunda.\n");
}

  return 0;
}