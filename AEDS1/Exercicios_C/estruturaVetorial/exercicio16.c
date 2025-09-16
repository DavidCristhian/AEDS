/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.
*/

#include <stdio.h>

#define TAM 5

// Função para ler os valores no vetor usando ponteiros
void lerVetor(int *vetor) {
    printf("Digite %d números inteiros:\n", TAM);
    for (int *ptr = vetor; ptr < vetor + TAM; ptr++) {
        scanf("%d", ptr);
    }
}

// Função para imprimir o dobro dos valores usando ponteiros
void imprimirDobro(int *vetor) {
    printf("Dobro dos valores:\n");
    for (int *ptr = vetor; ptr < vetor + TAM; ptr++) {
        printf("%d ", (*ptr) * 2);
    }
    printf("\n");
}

int main() {
    int vetor[TAM];

    lerVetor(vetor);
    imprimirDobro(vetor);

    return 0;
}

