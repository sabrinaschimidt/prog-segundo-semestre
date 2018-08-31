// Programa: elapsed01.c
// Programador:
// Data: 22/09/2010
// O Diálogo: Este programa lê medidas de tempo decorridas, dadas
// horas, minutos e segundos. O programa efetua a soma dessas
// duas medidas e imprime os resultados. 
// Declaração de bibliotecas utilizadas
#include<stdio.h>  // printf, scanf

// início da função principal
int main(void) { // início do programa principal
// Declaração das variáveis locais
unsigned int horas1,       // horas da primeira medida
             minutos1,     // minutos da primeira medida
             segundos1,     // segundos da primeira medida
             horas2,       // horas da segunda medida
             minutos2,     // minutos da segunda medida
             segundos2,    // segundos da segunda medida
             tothoras,     // soma total das horas
             totminutos,   // soma do total de minutos
             totsegundos;  // soma do total de segundos

// pré: horas[1] minutos[1] segundos[1]
//      horas[2] minutos[2] segundos[2]

// Passo 1. Leia a entrada
    scanf("%d %d %d", &horas1, &minutos1, &segundos1);
    scanf("%d %d %d", &horas2, &minutos2, &segundos2);
// Passo 2. Calcule a soma das medidas
// Passo 2.1. Calcule a soma dos segundos
    totsegundos = (segundos1+segundos2)%60;
// Passo 2.2. Calcule a soma dos minutos
    totminutos = (minutos1+minutos2+(segundos1+segundos2)/60)%60;
// Passo 2.3. Calcule a soma das horas
    tothoras = (horas1+horas2+(minutos1+minutos2+(segundos1+segundos2)/60)/60);
// Passo 3. Imprima o resultado
   printf("%2u horas %2u minutos %2u segundos +\n", horas1, minutos1, segundos1);
   printf("%2u horas %2u minutos %2u segundos =\n", horas2, minutos2, segundos2);
   printf("%2u horas %2u minutos %2u segundos\n", tothoras, totminutos, totsegundos);
   
   return 0;
  
// pós: tothoras == (horas1 + horas2 + (minutos1 + minutos2 +
//      (segundos1 + segundos2)/60)/60 && totminutos == (minutos1 +
//      minutos2 + (segundos1 + segundos2)%60 && totsegundos ==
//      (segundos1 + segundos2)%60   
} // final da função principal
