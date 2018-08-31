//Programa: digitos.c
//Programador: Sabrina
//Data: 23/08/2018
//Este programa lê um número inteiro e computa a soma dos 
//dois digitos menos significativos do numero
//Declaração das bibliotecas utilizadas
#include<stdio.h> // printf e scanf

//início da função principal
int main(void) { 

//Declaração das Variáveis Locais
int numero;
int digito1=0, digito2=0;
int soma;

//pré: numero

//Passo1. Leia o numero
	scanf("%d", &numero);
	
//Passo2. Calcule os dois digitos menos significativos
	digito1 = numero%10;
	numero = numero/10;
	digito2 = numero%10;
//Passo3. Compute a soma dos digitos
	soma = digito1 + digito2;
//Passo4. Imprima o resultado
   printf("%d\n", soma);

   return 0;

//pós: soma == digito1 + digito2
} //fim da função principal

