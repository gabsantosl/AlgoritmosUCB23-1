/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 02/05/23

EX-02) CRIAR UM PROGRAMA QUE EXECUTE UMA MATRIZ 3X3, EM QUE OS VALORES
	   LAN�ADOS DE ACORDO COM A LINHA E COLUNA E A MESMA � MONTADA NO
	   FORMATO DA MATRIZ.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int l, c, matriz[3][3];
	
	printf("Digite os algoritmos que comp�em a matriz:\n");
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("\nLINHA %d COLUNA %d: ", l+1, c+1);
			scanf("%d", &matriz[l][c]);
		}
	}
	
	printf("\n\nMATRIZ 3X3 = ");
	
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			printf("%d, %d, %d\n", matriz[l][c], matriz[l][c], matriz[l][c]);
		}
	}
	
return 0;
}
