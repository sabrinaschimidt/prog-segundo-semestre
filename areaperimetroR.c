// Programa: areaperimetroR.c
// Programador: Sabrina
// Data: 15/08/2018
// Diálogo: Este programa lê o valor da base e da altura de
// um retângulo e calcula o perímetro e a área do retângulo
// e imprime o resultado.  
// Bibliotecas Utilizadas
#include<stdio.h> // printf
// início da função principal

int main(void) {
// declaração das variáveis locais
double base, altura;
double perimetro;
double area;
    
// pré: base altura

// Passo 1. Leia a base e a altura do retângulo
   printf("Entre com o valor da base do retângulo: ");
   scanf("%lf", &base);
   printf("Entre com o valor da altura do retângulo: ");
   scanf("%lf", &altura);
// Passo 2. Calcule o perímetro
   perimetro = 2*(base + altura);
// Passo 3. Calcule a área
   area = base * altura;
// Passo 4. Imprima o lado, perímetro e área
   printf("Base = %.2f\n", base);
   printf("Altura = %.2f\n", altura);
   printf("Perímetro = %.2f\n", perimetro);
   printf("Área = %.2f\n", area);

   return 0;

// pós: perimetro == 2 * (base + altura) && area == base * altura
} // fim da função principal
