//Programa: concatena.c
//Programador: Sabrina
//Data: 22/08/2018
//Diálogo: Este programa lê duas palavras e imprime a concatenação das duas palavras
//Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>

//inicio da função principal
int main (void){

//Declaração das variáveis
 char palavra1[25];
 char palavra2[25];
 
//pré: palavra1 e palavra2

//Passo1. Leia as palavras
	scanf("%s", palavra1);
	scanf("%s", palavra2);

//Passo2. Faça a concatenação das palavras
    strcat(palavra1, palavra2);

//Passo3. Imprima o resultado
	printf("%s", palavra1);

    return 0;
//pós: strcat(palavra1, palavra2)
} //fim da função principal
