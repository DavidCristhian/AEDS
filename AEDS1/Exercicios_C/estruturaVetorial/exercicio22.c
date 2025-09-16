/*
Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.
*/

#include <stdio.h>

void encontrarMinMax(int *vet, int tamanho, int *min, int *max) {
    *min = *max = *vet;
    for (int i = 1; i < tamanho; i++) {
        if (*(vet + i) < *min) *min = *(vet + i);
        if (*(vet + i) > *max) *max = *(vet + i);
    }
}

int main() {
    int vetor[] = {10, 3, 45, 7, 99, -5};
    int min, max;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);
    return 0;
}
