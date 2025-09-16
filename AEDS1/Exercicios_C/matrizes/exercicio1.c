/*
1. Implemente uma função para realizar a leitura dos valores para uma matriz bidimensional.
Argumento: o endereço para uma matriz de reais
Valor gerado: nenhum
2. Implemente uma função que verifica se duas matrizes bidimensionais são iguais ou não.
Argumentos: os endereços das duas matrizes a serem comparadas
Valor gerado: true, caso sejam as matrizes iguais, ou false, caso contrário
*/

#include<stdio.h>
#include<stdbool.h>
#define max_lin 2
#define max_col 2

void ler_matriz(int m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite o elemento [%d][%d]" , i, j);
            scanf("%d" , &m[i][j]);
        }
    }
}

void imprimir_matriz(int mat[][max_col]){
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("%d " , mat[i][j]);
        }
        printf("\n");
    }
}

bool comparar_matrizes(int m1[max_lin][max_col], int m2[max_lin][max_col]){
    bool sao_iguais = true;

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            if(m1[i][j] != m2[i][j]){
                sao_iguais = false;
                return sao_iguais;
            }
        }
    }

    return sao_iguais;
}

int main(){
    printf("=== Comparacao entre matrizes ===\n\n");
    int mat1[max_lin][max_col], mat2[max_lin][max_col];

    ler_matriz(mat1);
    ler_matriz(mat2);

    printf("1 matriz\n");
    imprimir_matriz(mat1);
    printf("2 matriz\n");
    imprimir_matriz(mat2);

    if(comparar_matrizes(mat1, mat2)){
        printf("\nAs matrizes sao iguais\n");
    }else{
        printf("\nAs matrizes sao diferentes");
    }


    return 0;
}