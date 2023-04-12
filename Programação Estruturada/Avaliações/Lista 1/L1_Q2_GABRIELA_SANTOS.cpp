/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 1

Q2- Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 
    1,10 metro e cresce 3 cent�metros por ano. Fa�a um programa em C que 
    recebendo a altura e o crescimento anual de duas pessoas calcule e 
    imprima quantos anos ser�o necess�rios para que a mais baixa seja 
    maior que a outra. Caso isto n�o ocorra em 100 anos informar mensagem 
    de impossibilidade. 
    Encerre a entrada de dados quando for digitada uma idade negativa. 
    (N�o use vetores ou matrizes).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int anos = 0;
    float altura1, cres1, altura2, cres2;

    while(anos >= 0){
        printf("Informe a sua altura: ");
        scanf("%f", &altura1);
        printf("Informe o seu crescimento anual em cent�metros: ");
        scanf("%f", &cres1);

        printf("\nInforme a sua altura: ");
        scanf("%f", &altura2);
        printf("Informe o seu crescimento anual em cent�metros: ");
        scanf("%f", &cres2);

        if(altura1 < 0 || altura2 < 0){
            printf("\nDados invalidos.\n");
            break;
        }

        cres1 = cres1 * 0.01;
        cres2 = cres2 * 0.01;

        if(altura1 >= altura2){
            while(altura1 >= altura2){
                altura1 = altura1 + cres1;
                altura2 = altura2 + cres2;
                anos++;

                if(anos > 100){
                    break;
                }  
            }
        }else{
            while(altura2 >= altura1){
                altura1 = altura1 + cres1;
                altura2 = altura2 + cres2;
                anos++;   

                if(anos > 100){
                    break;
                }             
            }
        }
        
        if(anos > 100){
            printf("\n� imposs�vel a pessoa mais baixa ficar maior que a outra.\n");
            break;
            }else{
                printf("\nSer�o necess�rios %d anos para que a pessoa mais baixa fique maior que a outra.\n\n", anos);
                anos = 0;
            }
    }

	return 0;
}