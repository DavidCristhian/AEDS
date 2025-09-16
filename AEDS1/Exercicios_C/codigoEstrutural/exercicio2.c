/*
Exercício: Escreva um programa que imprima na tela os senos de 3,14 e de 4,13. Não se preocupe,
boa parte desse código é novidade para você! No entanto, não é muito difícil deduzir
quais operações você precisa alterar (e criar) para imprimir os valores dos senos pedidos
nesta questão. Dica: Incluir a biblioteca <math.h> e usar a função sin() para calcular o
seno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double num1 = 3.14;
    double num2 = 4.13;
    double seno1, seno2;

    seno1 = sin(num1);
    seno2 = sin(num2);

    printf("O seno de %.2f equivale a: %.6f" , num1, seno1);
    printf("O seno de %.2f equivale a: %.6f" , num2, seno2);

    return 0;
}