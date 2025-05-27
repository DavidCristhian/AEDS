/*
Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.
*/

#include <stdio.h>

void obterExtremos(int *vet, int tamanho, int *minimo, int *maximo) {
    *minimo = *maximo = *vet;
    for (int i = 1; i < tamanho; i++) {
        if (*(vet + i) < *minimo) *minimo = *(vet + i);
        if (*(vet + i) > *maximo) *maximo = *(vet + i);
    }
}

int main() {
    int valores[] = {25, -2, 8, 17, 100, -50};
    int minimo, maximo;
    int tam = sizeof(valores) / sizeof(valores[0]);

    obterExtremos(valores, tam, &minimo, &maximo);

    printf("Mínimo: %d\n", minimo);
    printf("Máximo: %d\n", maximo);
    return 0;
}
