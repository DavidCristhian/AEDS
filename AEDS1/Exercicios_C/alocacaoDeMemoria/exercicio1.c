/*
Implemente um programa que aloque dinamicamente um array de 10 números inteiros.
Preencha o array com valores de 1 a 10 e, em seguida, imprima esses valores. Libere a
memória ao final.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int*) malloc(10 * sizeof(int));  // Aloca espaço para 10 inteiros

    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);  // Libera a memória
    return 0;
}
