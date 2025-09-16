/*
Escreva uma função redimensiona_array que utilize realloc para redimensionar di-
namicamente um array de inteiros. A função deve receber o ponteiro para o array, o
tamanho atual e o novo tamanho desejado, e deve retornar o ponteiro para o novo array
redimensionado. Teste a função no programa principal.
*/

#include <stdio.h>
#include <stdlib.h>

int* redimensiona_array(int *array, int novoTamanho) {
    return (int*) realloc(array, novoTamanho * sizeof(int));
}

int main() {
    int tamanho = 5;
    int *vet = (int*) malloc(tamanho * sizeof(int));
    if (vet == NULL) return 1;

    for (int i = 0; i < tamanho; i++) vet[i] = i + 1;

    printf("Array original:\n");
    for (int i = 0; i < tamanho; i++) printf("%d ", vet[i]);

    tamanho = 8;
    vet = redimensiona_array(vet, tamanho);

    for (int i = 5; i < tamanho; i++) vet[i] = i + 1;

    printf("\nArray redimensionado:\n");
    for (int i = 0; i < tamanho; i++) printf("%d ", vet[i]);

    free(vet);
    return 0;
}
