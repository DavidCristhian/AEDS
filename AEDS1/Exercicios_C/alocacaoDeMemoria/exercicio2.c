/*
Escreva uma função chamada soma_elementos que receba um ponteiro para um array de
inteiros (alocado dinamicamente) e o tamanho do array. A função deve retornar a soma
de todos os elementos. Teste a função alocando um array de tamanho 5 no programa
principal, preenchendo-o com valores de sua escolha.
*/

#include <stdio.h>
#include <stdlib.h>

int soma_elementos(int *array, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int *vet = (int*) malloc(5 * sizeof(int));

    if (vet == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int resultado = soma_elementos(vet, 5);
    printf("Soma: %d\n", resultado);

    free(vet);
    return 0;
}
