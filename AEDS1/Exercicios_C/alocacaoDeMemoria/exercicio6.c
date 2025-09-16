/*
Escreva um programa em C que aloque dinamicamente memória para armazenar um
número inteiro, um número de ponto flutuante (‘float‘) e um caractere (‘char‘). Solicite
ao usuário que insira valores para essas variáveis e exiba-os. Libere a memória alocada
ao final do programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *inteiro = (int*) malloc(sizeof(int));
    float *flutuante = (float*) malloc(sizeof(float));
    char *caractere = (char*) malloc(sizeof(char));

    if (!inteiro || !flutuante || !caractere) return 1;

    printf("Digite um inteiro: ");
    scanf("%d", inteiro);
    printf("Digite um float: ");
    scanf("%f", flutuante);
    printf("Digite um caractere: ");
    scanf(" %c", caractere);

    printf("Inteiro: %d\nFloat: %.2f\nChar: %c\n", *inteiro, *flutuante, *caractere);

    free(inteiro);
    free(flutuante);
    free(caractere);
    return 0;
}
