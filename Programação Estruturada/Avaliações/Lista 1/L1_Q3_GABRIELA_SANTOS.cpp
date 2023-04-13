/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 1

Q3- Elabore um programa que fa�a o sorteio de v�rios n�meros e ao final 
    mostra: 
    a) A quantidade de n�meros sorteados; 
    b) O Maior numero sorteado; 
    c) Quantos n�meros pares foram sorteados; 

    Observa��o: O programa deve finalizar quando for sorteado o valor 0 
    (zero) e utilizar no m�ximo 3 vari�veis. N�o utilizar vetores ou matrizes. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int num, maiorNum, total=0, par=0;

    printf("Sorteador de n�meros.\n");
    
    while(num != 0){
        srand(num);
        total++;

        if(num % 2 == 0){
            par++;
        }

        if(num < maiorNum){
            maiorNum = num;
        }
    }

    printf("Foram sorteados %d n�meros.\n", total);
    printf("O maior n�mero sorteado foi %d.\n", maiorNum);
    printf("%d deles eram n�meros pares.\n", par);

	return 0;
}