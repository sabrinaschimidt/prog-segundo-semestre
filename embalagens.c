// Programa: embalagens.c
// Programador: Sabrina
// Data: 29/08/2018
// Este programa lê o número de chocolates a serem enviados. Calcula a
// forma como os chocolates devem ser embalados. Como os chocolates são
// frágeis, nenhuma caixa pode ficar com espaço vazio, pois isso pode
// danificar as barras de chocolates. Serão utilizadas quatro tamanhos
// de caixas: enorme, grande, média e pequena, as quais podem conter
// 50, 20, 5 e 1 barras de chocolate, respectivamente. O programa
// calcula número de caixas de tamanho enorme, grande, médio e pequeno,
// necessárias para enviar o número de chocolates lidos utilizando o
// mínimo de caixas. O tamanho das caixas é dado como constante. O
// programa imprime a quantidade de caixas necessárias para o envio 
// dos chocolates. São enviados no máximo 30.000 barras de chocolate.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf

// declaração das constantes globais
#define ENORME  50
#define GRANDE  20
#define MEDIO    5
#define PEQUENO  1

// início da função principal
int main(void) {
// declaração das variáveis locais
int numchocolates;   // número de barras de chocolate
int cxenorme;        // número de caixas tamanho enorme
int cxgrande;        // número de caixas tamanho grande
int cxmedia;         // número de caixas tamanho médio
int cxpequena;       // número de caixas tamanho pequeno

// pré: numchocolates

// Passo 1. Leia os número de barras de chocolates
   scanf("%d", &numchocolates);
   
// Passo 2. Calcule o número de embalagens
// Passo 2.1. Calcule o número de embalagens de tamanho enorme
	cxenorme= numchocolates/50;  
    numchocolates= numchocolates%50; // num de barras sem embalagem
// Passo 2.2. Calcule o número de embalagens de tamanho grande
  	cxgrande= numchocolates/20;
    numchocolates= numchocolates%20; // num de barras sem embalagem
// Passo 2.3. Calcule o número de embalagens de tamanho médio
    cxmedia= numchocolates/5;
    numchocolates= numchocolates%5; // num de barras sem embalagem
// Passo 2.4. Calcule o numero de embalagens de tamanho pequeno
    cxpequena= numchocolates/1;
    numchocolates= numchocolates%1; // num de barras sem embalagem

// Passo 3. Imprime os resultados
   printf(" Caixa        Qtde\n");
   printf("===========   =====\n");
   printf("  Enorme       %3d\n", cxenorme);
   printf("  Grande       %3d\n", cxgrande);
   printf("  Média        %3d\n", cxmedia);
   printf("  Pequena      %3d\n", cxpequena);

   return 0;

// pós: caixaenorme, caixagrande, caixamedia, caixapequena 
} // fim da função main
