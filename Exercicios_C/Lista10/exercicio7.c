/*
Crie um programa que aloque dinamicamente um array de 5 inteiros, preencha-o com
valores fornecidos pelo usuário e exiba o maior valor presente no array. Depois, libere a
memória.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet = (int*) malloc(5 * sizeof(int));
    if (vet == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];
    for (int i = 1; i < 5; i++) {
        if (vet[i] > maior) maior = vet[i];
    }

    printf("Maior valor: %d\n", maior);
    free(vet);
    return 0;
}
