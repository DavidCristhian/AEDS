/*
Crie um programa em C que aloque dinamicamente um array de ‘n‘ inteiros, onde ‘n‘ é
informado pelo usuário. Após a alocação, solicite ao usuário que insira os valores de cada
elemento do array. Em seguida, imprima os valores e libere a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int *array = (int*) malloc(n * sizeof(int));
    if (array == NULL) return 1;

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Valores: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array);
    return 0;
}
