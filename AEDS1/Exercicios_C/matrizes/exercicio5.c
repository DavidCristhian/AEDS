/*
Implemente uma função que receba duas matrizes de reais. A função deverá calcular a matriz transposta
da primeira, armazenando-a na segunda matriz.
* Planeje, com cuidado, as dimensões de ambas as matrizes parametrizadas
* Planeje, com cuidado, os parâmetros e os valores gerados
*/

#include<stdio.h>
#define max_lin 3
#define max_col 2

void ler_matriz(float m[max_lin][max_col]){
    for (int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++){
            printf("Digite o elemento [%d][%d]: \n" , i, j);
            scanf("%f" , &m[i][j]);
        }

    }
}

void imprimir_matriz(float m[max_lin][max_col]){
    for (int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++){
            printf(" %.2f " , m[i][j]);
        }
        printf("\n");
    }
}

void transformar_matriz_transposta(float mat1[max_lin][max_col], float mat2[max_col][max_lin]){
    for (int i = 0; i < max_col; i++){
        for (int j = 0; j < max_lin; j++){
            mat2[j][i] = mat1[i][j]; 
        }
    }
}

void imprimir_matriz_transposta(float m[max_col][max_lin]){
    for (int i = 0; i < max_col; i++){
        for (int j = 0; j < max_lin; j++){
            printf(" %.2f " , m[j][i]);   
        }
        printf("\n");
    }
}

int main(){
    float mat1[max_lin][max_col], mat_transposta[max_col][max_lin];

    ler_matriz(mat1);
    transformar_matriz_transposta(mat1, mat_transposta);

    printf("Matriz\n");
    imprimir_matriz(mat1);
    printf("\n");
    printf("Matriz transposta\n");
    imprimir_matriz_transposta(mat_transposta);

    return 0;
}