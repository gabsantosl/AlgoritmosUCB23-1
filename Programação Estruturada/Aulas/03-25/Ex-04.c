/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 25/03/2023

1- A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando 
dados sobre o sal�rio e o n�mero de filhos. A prefeitura deseja saber:
    a) A m�dia salarial da popula��o;
    b) A m�dia do n�mero de filhos;
    c) o maior sal�rio;
    d) o percentual de pessoas com sal�rio at� R$ 100,00.

O final da leitura de dados se dar� com a entrada de um sal�rio negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int i=1, filhos, somaFilhos=0, salario100=0;
	float salario, somaSalario=0, mediaSalario, mediaFilhos, maiorSalario=0, porcentual;

    printf("======= PESQUISA DA PREFEITURA =======\n");

    printf("\n=== %d� Coleta de dados ====", i);
    printf("\nInforme o seu sal�rio: ");
    scanf("%f", &salario);
    printf("Quantos filhos voc� tem? ");
    scanf("%d", &filhos);

    while (salario > 0)
    {
        i++;
        printf("\n=== %d� Coleta de dados ==== ", i);
        printf("\nInforme o seu sal�rio: ");
        scanf("%f", &salario);
        printf("Quantos filhos voc� tem? ");
        scanf("%d", &filhos);

        if(salario < 100){
            salario100++;
        }
        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        somaFilhos = somaFilhos + filhos;
        mediaFilhos = somaFilhos / i;
        somaSalario = somaSalario + salario;
        mediaSalario = somaSalario / i;
        porcentual = ((float)salario100 / i) * 100;
    }

    printf("\n\n======= RESULTADOS DA PESQUISA =======\n");

    printf("\nA m�dia salarial da popula��o � %.2f.", mediaSalario);
    printf("\nA m�dia de filhos da popula��o � %.2f.", mediaFilhos);
    printf("\nO maior sal�rio encontrado foi de R$%.2f.", maiorSalario);
    printf("\nCerca de %.2f porcento da popula��o possui um sal�rio de at� R$ 100,00.\n", porcentual);
	return 0;
}