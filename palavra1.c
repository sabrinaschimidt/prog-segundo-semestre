// Programa: palavra1.c
// Programador: Sabrina 
// Data: 15/08/2018 
// Este programa lê duas palavra de no máximo 30 caracteres,
// e imprime as palavras separadas com um caractere espaço. 
// Declaração das bibliotecas utilizadas 
#include<stdio.h>

// declaração de tipos
typedef char string[30];

int main(void) {
// declaração das variáveis
string palavra1, palavra2;

// pré: palavra1 palavra2
 
// Passo 1. Leia uma palavra 
   printf("Entre com a palavra1: "); 
   scanf("%s", palavra1);
   printf("Entre com a palavra2: "); 
   scanf("%s", palavra2);
// Passo 2. Imprima as palavras lidas      
   printf("%s %s\n", palavra1, palavra2);
      
   // Finalizando scanf 
      return 0; 

   // pós: palavra 
} // fim da função principal
