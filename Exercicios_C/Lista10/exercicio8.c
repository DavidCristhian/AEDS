/*
Escreva um programa que aloque dinamicamente um array de ‘n‘ inteiros, onde ‘n‘ é
informado pelo usuário. Preencha o array com valores fornecidos pelo usuário e use uma
função para calcular e retornar a média dos valores. Exiba a média e libere a memória
ao final.
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_media(int *vet, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    return (float)soma / n;
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) return 1;

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float media = calcular_media(vetor, n);
    printf("Média: %.2f\n", media);

    free(vetor);
    return 0;
}
