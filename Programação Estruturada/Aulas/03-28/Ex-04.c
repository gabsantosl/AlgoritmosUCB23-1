/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 28/03/2023

EXERC�CIO 2- A partir do c�digo anterior (Ex-02) voc� dever� melhorar o c�digo 
de modo a pedir repetidas vezes as notas dos alunos, sempre que um conjunto for 
lido e processado. Para finalizar o programa o usu�rio dever� pressionar uma 
tecla espec�fica, como a tecla 'F'.;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	char x;
	float nota, media, total=0;
	
	printf("====== CALCULE A SUA M�DIA ======\n");
	
	printf("Para iniciar o programa pressione 'C' e para finalizar pressione 'F': ");
	scanf("%s", &char);
	
	switch (x)
	{
		case 'F':
		printf("Programa Finalizado.\n");
		break;
		case 'C':
		for(i = 1; i <= 4 ; i++){
		
		printf("Informe a %d� nota: ", i);
		scanf("%f", &nota);
		total = total + nota;
		}
	}
	
	
	media = total/4;
	
	printf("\nA m�dia do aluno �: %.2f.", media);
	
	return 0;
}
