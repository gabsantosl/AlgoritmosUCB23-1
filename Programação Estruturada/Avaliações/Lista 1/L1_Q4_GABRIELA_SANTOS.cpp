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
	
    int cont = 0, nota7 = 0;
    float nota, media, menorMedia = 10, mediaTurma = 0;

    for(;;){

        media = 0;

        printf("\nPara parar o programa digite 0.");
        printf("\nInforme a primeira nota: ");
		scanf("%f", &nota);
        media = media + nota;

        if(nota == 0){
            break;
        }

        printf("Informe a segunda nota: ");
		scanf("%f", &nota);
        media = media + nota;

        media = media/2;
        mediaTurma = mediaTurma + media;

        if(nota == 0){
            break;
        }

        if(media >= 7){
            nota7++;
        }
        if(media < menorMedia){
            menorMedia = media;
        }

        cont++;
        printf("\n");
    }
    
    printf("\n%d alunos obtiveram m�dia maior ou igual de 7,0.", nota7);
    printf("\nA menor m�dia da turma foi %.2f.", menorMedia);
    printf("\nA m�dia geral da turma foi %.2f.", mediaTurma);
    printf("\nO programa coletou notas de %d alunos.", cont);
    printf("\n");
    
	return 0;
}