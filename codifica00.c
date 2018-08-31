// Programa: codifica00.c
// Programador: Sabrina
// Data: 23/08/2018
// Este programa le uma palavra com 5 caracteres do alfabeto e um
// número inteiro entre 0 e 25, codifica a palavra convertendo cada
// caractere da palavra para o seu código numérico ASCII e adicionando
// um inteiro positivo entre 0 e 25 e computa o caractere
// correspondente a esse deslocamento e imprime a palavra resultante.
// O Alfabeto é tratado de forma circular, ou seja, Z + 1 == A.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<string.h>
// Declaração dos tipos
typedef char string[20];

// início da função principal
int main(void) {
// Declaração das variáveis locais
string palavra,      // mensagem a ser codificada
       codificada;
int    codificador;  // inteiro a ser adicionado para codificar

// pré: palavra == c[1]...c[5] codificador

//Passo1. Leia a palavra
	scanf("%s", palavra);
//Passo2. Leia o codificador
	scanf("%d", &codificador);
//Passo3. Codifique a palavra
	codificada[0] = (palavra[0]-'A'+codificador)%26 + 'A';
	codificada[1] = (palavra[1]-'A'+codificador)%26 + 'A';
	codificada[2] = (palavra[2]-'A'+codificador)%26 + 'A';
	codificada[3] = (palavra[3]-'A'+codificador)%26 + 'A';
	codificada[4] = (palavra[4]-'A'+codificador)%26 + 'A';
	codificada[5] = (palavra[5]-'A'+codificador)%26 + 'A';
	codificada[6] = '\0';

//Passo4. Imprima a palavra codificada
	printf("%s\n", codificada);

   return 0;

// pós: codificada == pc[1]...pc[5] && pc[i]==c[i] + codificador
} // fim da função principal
