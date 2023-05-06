/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 05/05/23

EX-01) CRIAR UM PROGRAMA QUE PEDE AO USU�RIO PARA DIGITAR 4 NOTAS DE 0 A 10 DE
       4 ALUNOS E OS VALORES DEVER�O SER ARMAZENADOS EM UMA MATRIZ BIDIMENSIONAL.
       FA�A A M�DIA DAS NOTAS DE CADA ALUNO E ARMAZENA AS 4 M�DIAS EM UM VETOR.
       COLOQUE NA TELA DO USU�RIO

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    const int bimestres = 4;
    const int quantAlunos = 4;

    float notasAlunos[quantAlunos][bimestres] = {0};
    float mediasAlunos[quantAlunos] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno 1: \n");

    for(int aluno = 0; aluno < quantAlunos; aluno++){
        for(int notas = 0; notas < bimestres; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media+= notasAlunos[aluno][notas];
        }

        mediasAlunos[quantAlunos] = media / bimestres;
        media = 0;

        printf("\nInsira as 4 notas do aluno %d: \n", aluno + 2);
    }

    for(aluno = 0; aluno < quantAlunos; aluno++){
        printf("\nA m�dia do aluno %d � %.2f.\n", aluno+1, mediasAlunos[quantAlunos]);
    }
	
	return 0;
}
