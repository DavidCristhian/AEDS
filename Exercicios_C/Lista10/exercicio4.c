/*
Escreva um programa em C que use a função ‘calloc‘ para alocar memória para uma
matriz 3x3 de inteiros. Preencha a matriz com valores fornecidos pelo usuário, exiba-a na
tela e, por fim, libere a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>
#define max_lin 3
#define max_col 3

void ler_matriz(float m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite o elemento [%d][%d]: \n" , i, j);
            scanf("%f" , &m[i][j]);
        }
    }
}

void imprimir_matriz(float m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++){
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int *matriz = (int*) calloc(9, sizeof(int));

    if (matriz == NULL) return 1;

    ler_matriz(matriz);

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    free(matriz);
    return 0;
}
