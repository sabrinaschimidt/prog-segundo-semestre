// Programa: notasordap.c
// Programador: Sabrina
// Data: 29/08/2018
// Este programa lê três números reais, ordena em ordem
// não decrescente e imprime os resultados.
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf

// início da função principal
int main(void) {
// Declaração das variáveis locais
double num1, num2, num3;
double aux;

// pré: num1 num2 num3

// Passo 1. - Leia as Notas
   scanf("%lf", &num1);
   scanf("%lf", &num2);
   scanf("%lf", &num3);
// Passo 2. Ordene as Notas
   if(num1>num2){
   	aux= num2;
   	num2= num1;
   	num1= aux; 
   }
   if(num2>num3){
   	aux= num3;
   	num3= num2;
   	num2= aux;
   }
   if(num1>num2){
   	aux= num2;
   	num2= num1;
   	num1= aux;
   }

// Passo 3. - Imprima os resultados
   printf("%.2f %.2f %.2f\n", num1, num2, num3);

   return 0;

// pós: num1 <= num2 <= num3
} // fim
