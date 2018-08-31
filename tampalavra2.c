// Programa: tampalavra2.c
// Programador: Sabrina
// Data: 15/08/2018
// Este programa lê duas palavras, calcula e imprime a soma dos 
// tamanhos das palavras (número de caracteres).
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // printf, scanf
#include<string.h> // strlen
// declaração de tipos
typedef char string[30];

// início da função principal
int main(void) {
// declaração das variáveis locais	
string palavra1, palavra2;
int    somatam;

// pré: palavra1 palavra2

// Passo 1. Leia duas palavra
   printf("Entre com a palavra1: ");
   scanf("%s", palavra1);
   printf("Entre com a palavra2: ");
   scanf("%s", palavra2);
// Passo 2. Compute a soma dos números de caracteres das palavras
   somatam = strlen(palavra1) + strlen(palavra2);
// Passo 3. Imprima a soma dos tamanhos das palavras     
   printf("tam(%s) + tam(%s) = %d\n", palavra1, palavra2, somatam);
   
   return 0;

// pós = soma == tam_palavra1 + tam_palavra2 && tam_palavra1 == número
//       de caracteres da palavra1 && tam_palavra2 == número de
//       caracteres da palavra2
} // fim da função principal
