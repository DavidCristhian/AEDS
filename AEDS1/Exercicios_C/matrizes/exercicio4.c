/*
Implemente uma função que receba duas matrizes de reais. A função deverá copiar a primeira matriz na
segunda.
Argumentos: os endereços para duas matrizes de reais
Valor gerado: nenhum
*/

#include<stdio.h>
#define max_lin 3
#define max_col 3

void ler_matriz(float  m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++){
            printf("Digite o elemento [%d][%d]: \n" , i, j);
            scanf("%f" , &m[i][j]);
        }
    }
}

void imprimir_matriz(float m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf(" %.1f " , m[i][j]);
        }
        printf("\n");
    }
}

void copia_matriz(float mat1[max_lin][max_col], float mat2[max_lin][max_col]){
    for (int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++){
            mat2[i][j] = mat1[i][j];
        }
    }
}

int main(){
    float mat1[max_lin][max_col], mat2[max_lin][max_col];

    ler_matriz(mat1);
    copia_matriz(mat1, mat2);

    printf("Primeira matriz\n");
    imprimir_matriz(mat1);
    printf("\n");
    printf("Segunda matriz / Copia\n");
    imprimir_matriz(mat2);

    return 0;
}