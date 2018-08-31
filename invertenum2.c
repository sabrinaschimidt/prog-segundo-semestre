// Programa: invertenum2.c
// Programador: Sabrina
// Data: 29/08/2018
// Este programa que lê um número inteiro de até quatro dígitos
// num = d_3d_2d_1d_0 onde 0 indica a posição das unidades, 1 a das
// dezenas, 2 a das centenas e 3 a dos milhares 
// (num =  d_3*10^3 + d_2*10^2 + d_1*10^1 + d_0*10^0).
// O seu programa deve inverter a ordem dos dígitos de num e gerar o
// numinvertido = d_0d_1d_2d_3 e imprimir o resultado.
// Bibliotecas Utilizadas
#include<stdio.h> // scanf, printf
#include<math.h>  // pow

// início da função principal
int main(void) {
// declaração das variáveis locais
int num, numinvertido=0;
int digito;


// pré: num

// Passo 1 - Leia o número
	scanf("%d", &num);
// Passo 2 - Inverta o número lido
		digito=num%10;
		numinvertido=10*numinvertido+digito;
		num=num/10;
		digito=num%10;
		numinvertido=10*numinvertido+digito;
		num=num/10;
		digito=num%10;
		numinvertido=10*numinvertido+digito;
		num=num/10;
		digito=num%10;
		numinvertido=10*numinvertido+digito;
		num=num/10;
// Passo 3 - Imprima o número na ordem reversa
   printf("%d\n", numinvertido);

   return 0;

// pós: numinv == d_0d_1d_2d_3
} // fim da função principal
