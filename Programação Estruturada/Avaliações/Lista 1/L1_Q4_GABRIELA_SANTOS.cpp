/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 1

Q4 - Elabore um programa que receba como dados de entrada duas notas de v�rios
alunos e ao final mostra: 
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A menor media da turma;
c) A media geral da turma;
d) Quantas vezes o programa rodou.

Observa��o: O programa deve finalizar quando for digitado o valor 0 (zero) e 
utilizar no m�ximo 6 vari�veis. N�o utilizar vetores ou matrizes.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    int quantAlunos, maior7 = 0;
    float nota, total, mediaTurma = 0, menorMedia = 10;

    while(nota != 0){
        quantAlunos++;

        for(i = 1; i <= 2; i++){
			printf("Informe a %d� nota: ", i);
			scanf("%f", &nota);
			total = total + nota;
		}

        if(total/2 >= 7){
            maior7++;
        }

        if(total/2 < 10){
            menorMedia = total/2;
        }

        mediaTurma = ;
    }

    printf("\nO programa coletou as notas de %d alunos.", quantAlunos);
    printf("\n%d alunos obtiveram media maior ou igual de 7,0.", maior7);
    printf("\nA menor m�dia da turma foi %.2f.", menorMedia);
    printf("\nA m�dia geral da turma foi %.2f.", mediaTurma);
    printf("\n");
    
	return 0;
}