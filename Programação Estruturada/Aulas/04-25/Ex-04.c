/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERC�CIOS 25/04/23

EX-04) VAI RECEBER DUAS STRINGS EM SEGUIDA CALCULAR O TAMANHO
	   E FAZER A CONCATENA��O DAS DUAS STRINGS.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char str1[80], str2[80], str3[160];

	printf("Digite duas strings:\n\n");
	gets(str1);
	gets(str2);
	
	printf("\nD�gitos: str1(%d) str2(%d).", strlen(str1), strlen(str2));
	
	if(!strcmp(str1, str2)){
		printf("\nAs strings s�o iguais.");
	}else{
		printf("\nAs strings n�o s�o iguais.\n");
	}
	
	strcat(str1, str2);
	printf("\nstr1 + str2 = %s.", str1);
	
	if(strrchr(str1, 't')){
		printf("\nO caract�re 't' est� presente na string.");
	}
	
	return 0;
}
