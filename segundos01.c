// Programa: segundos01.c
// Programador: Sabrina
// Data: 15/08/2018
// O Diálogo: Este programa lê uma medida de tempo, dada em dias, horas, 
// minutos e segundos e calcula seu equivalente em segundos.
// Declaração de bibliotecas utilizadas
#include <stdio.h> // printf, scanf

// início da função principal
int main(void) {
// Declaração das variáveis locais
    int dias;
    int horas;
    int minutos;
    int segundos;
    int totalSegundos;
// pré: horas, minutos, segundos

// Passo 1. Leia os dias, horas, minutos e segundos
    scanf("%d %d %d %d", &dias, &horas, &minutos, &segundos);
// Passo 2. Calcule o total de segundos
    totalSegundos = segundos + 60*minutos + 3600*horas + 24*3600*dias;
// Passo 3. Imprima Horas, Minutos, Segundos e o Total de Segundos
   printf("%u Dias + %u Horas + %u Minutos + %u Segundos = %u Segundos\n", \
	       dias, horas, minutos, segundos, totalSegundos);

   return 0;

// pós: totalSegundos == segundos + 60*minutos + 60*60*horas + 24*3600*dias
} // final da função principal
