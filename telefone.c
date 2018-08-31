// Programa: telefone.c
// Programador: Sabrina
// Data: 30/08/2018
// Diálogo: Este programa calcula a saldo de um telefone pré-pago.
// O programa lê o crédito pré-existente e a duração da chamada.
// Os valores do custo por minuto e da taxa dos impostos é dada
// por meio de uma constante. O programa calcula o custo da
// chamada, o valor dos impostos e o valor total da chamada e o
// saldo remanescente. O programa imprime os resultados do
// do custo da chamada, do custo dos impostos, do custo do total 
// da chamada e do saldo remanescente. 
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
#include<math.h>
#define IMPOSTO 18.5
#define MINUTO 1.55

// início da função principal
int main(void) {
// declaração das variáveis locais
double    saldo_Anterior;
double    duracao;   
double    valor_Chamada;
double    valor_Impostos;
double    valor_Totalchamada;
double    saldo_Atual;
long int  temp;
    
// pré: saldo_Anterior, duracao

// Passo 1 - Leia o saldo anterior e a duração da chamada
	scanf("%lf %lf", &saldo_Anterior, &duracao);
// Passo 2 - Calcule valor chamada, impostos e total
// Passo 2.1. calcule o minuto cheio
   duracao=ceil(duracao);
// Passo 2.2. Calcule o valor da chamada
   valor_Chamada = duracao*MINUTO;
// Passo 2.3. Calcule os impostos
   valor_Impostos = (valor_Chamada*IMPOSTO)/100.0;
// Passo 2.4 Calcule o valor total da chamada
	valor_Totalchamada = valor_Impostos + valor_Chamada;    
// Passo 2.5. Calcule o saldo remanescente (aproximação)
	saldo_Atual = saldo_Anterior - valor_Totalchamada;
	temp = (int) (100.0*saldo_Atual+0.5);
	saldo_Atual = temp/100.0;

// Passo 3 - Imprima os resultado
   printf("Valor do Saldo Anterior     :R$%7.2f\n", saldo_Anterior);
   printf("Valor da Chamada            :R$%7.2f\n", valor_Chamada);
   printf("Valor dos Impostos          :R$%7.2f\n", valor_Impostos);
   printf("Valor Total da Chamada      :R$%7.2f\n", valor_Totalchamada);
   printf("Valor do Saldo Remanescente :R$%7.2f\n", saldo_Atual);   

   return 0;
	
// pós: valor_Chamada, valor_Impostos, valor_Totalchamadas
} // fim da função principal
