// Programa: compara.c
// Programados: Sabrina
// Data: 29/08/2018
// Este programa lê duas palavras, computa qual é a maior 
// (lexicograficamente) e imprime a maior.
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<string.h> // strcmp, strcpy
// Definições de contantes
#define TAMMAX 25
// Declaração de tipos
typedef char string[TAMMAX];

// início da função principal
int main(void) {
// declaração das variáveis locais	
string palavra1, palavra2, maior;
int tam;

// pré: palavra1 == UmChar1[0]..UmChar1c[n] palavra2 == UmChar2[0]..UmChar2[m]

// Passo 1. Leia as palavras
   printf("Leia a palavra 1: ");
   scanf("%s", palavra1);
   printf("Leia a palavra 2: ");
   scanf("%s", palavra2);
// Passo 2. Compute a maior palavra
   tam = strcmp(palavra1, palavra2);
// Passo 2.1. copie palavra1 em maior
   if(tam<0)
   	strcpy(maior, palavra2);
   else
   	strcpy(maior, palavra1);
// Passo 3. Imprima a maior palavra		
   printf("Maior palavra = %s\n", maior);
   
	return 0;

// pós: maior && maior >= palavra1, palavra2
} // fim da função principal
