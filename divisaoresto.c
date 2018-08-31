// Programa: divisaoresto.c
// Programador: Sabrina 
// Data: 15/08/2018
// O Diálogo: Este programa lê dois números inteiros calcula o
// quociente e o resto da divisão entre os dois números e imprime 
// os resultados. 
// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf

// início da função principal
int main(void) { 
// declaração das variáveis locais
int dividendo;
int divisor;
int quociente;
int resto;

// pré: dividendo, divisor

// Passo 1. Leia o dividendo e o divisor
   printf("Leia dois números inteiros: ");
   scanf("%d", &dividendo);
   scanf("%d", &divisor);
   
// Passo 2.1. Calcule o quociente
   quociente = dividendo/divisor;
// Passo 2.2. Calcule o resto
   resto = dividendo%divisor;
// Passo 3. Imprima o quociente e o resto
   printf("%d / %d = %d\n", dividendo, divisor, quociente);
   printf("%d %% %d = %d\n", dividendo, divisor, resto);

   return 0;

// pós: quociente == dividendo/divisor && resto == dividendo %
//      divisor 
} // fim da função principal
