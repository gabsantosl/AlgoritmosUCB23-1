/*
UNIVERSIDADE CAT�LICA DE BRAS�LIA 
CURSO DE CI�NCIA DA COMPUTA��O - MATUTINO
TURMA DE ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- ARTHUR
- GABRIELA DOS SANTOS LEITE
- JESSICA LAIS
- OTAVIO

PARTE 3 - Q2) Crie um programa em C que receba tr�s n�meros do usu�rio depois crie uma fun��o que receba
              os 3 n�meros como par�metros: A, B e C. Ordene de tal forma que, ao final da fun��o, A contenha
              o menor n�mero e C o maior. Imprima os tr�s n�meros. 
              Obs: Utilize ponteiro para solucionar o problema.

*/

#include <stdio.h>
#include <locale.h>
int main (){

    setlocale(LC_ALL, "Portuguese");

	int num[3], i, A=0, B=0, C=0;

    printf("Insira 3 n�meros:\n");

    for (i = 0; i < 3; i++){
		printf("Valor %i: ", i+1);
    	scanf("%d", &num[i]);    
	}

    if(num[0] < num[1] && num[0] < num[2]){
        A = num[0];
    }else{
        if(num[0] > num[1] && num[0] > num[2]){
            C = num[0];
        }else{
            B = num[0];
        }
    }

    if(num[1] < num[0] && num[1] < num[2]){
        A = num[1];
    }else{
        if(num[1] > num[0] && num[1] > num[2]){
            C = num[1];
        }else{
            B = num[1];
        }
    }

    if(num[2] < num[1] && num[2] < num[0]){
        A = num[2];
    }else{
        if(num[2] > num[1] && num[2] > num[0]){
            C = num[2];
        }else{
            B = num[2];
        }
    }

    printf("\n");
    printf("Os valores inseridos foram:\n\n");

    printf ("Valor de A: %d\n", A);
    printf ("Valor de B: %d\n", B);
    printf ("Valor de C: %d\n", C);

	return(0);
}