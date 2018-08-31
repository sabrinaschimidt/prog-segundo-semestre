//Programa: tempodecorrido.c
//Programador: Sabrina
//Data: 22/08/2018
//Diálogo: Este lê os segundos e calcula as horas
//Declaração das bibliotecas ultilizadas
#include<stdio.h> // scanf e printf

//Inicio da função principal
int main (void){
    
//Declaração das variáveis
int segundos;
int h, m, s;
//pré: segundos

//Passo1. Leia os segundos
    scanf("%d", &segundos);

//Passo2. Calcula as horas
    h = segundos/3600;
    m = (segundos%3600)/60;
    s = (segundos%3600)%60;
    
//Passo3. Imprime os resultados
    printf("%d %d %d", h, m, s);

//pós: h == segundos/3600 && m == (segundos%3600)/60 && s == (segundos%3600)%60;

return 0;
} //fim da função principal
