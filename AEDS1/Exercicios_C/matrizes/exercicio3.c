/*
Para uma matriz quadrada de reais, construa uma função que calcule a diferença entre o maior valor
presente acima de sua diagonal principal e o maior valor presente abaixo da diagonal principal.
Argumento: o endereço da matriz quadrada de reais
Valor gerado: um valor real relativo à diferença entre os maiores valores acima e abaixo da diagonal
*/

#include<stdio.h>
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

float diferenca_maiores_valores_diagonal(float m[max_lin][max_col]){
    float maior_acima = m[0][1], maior_abaixo = m[1][0];

    for(int i = 0; i < max_lin; i++){
        for(int j = i + 1; j < max_col; j++){
            if(m[i][j] > maior_acima) maior_acima = m[i][j];
        }
    }

    for(int i = 0; i < max_lin; i++){
        for (int j = 0; j < i; j++){
            if(m[i][j] > maior_abaixo) maior_abaixo = m[i][j];
        }
    }

    return maior_acima - maior_abaixo;
}

int main(){
    float matriz[max_lin][max_col], dif_maiores_valores_diagonais;

    ler_matriz(matriz);
    imprimir_matriz(matriz);

    dif_maiores_valores_diagonais = diferenca_maiores_valores_diagonal(matriz);

    printf("A diferenca entre os maiores valores acima e abaixo da diagonal principal, equivale a: %.2f" , dif_maiores_valores_diagonais);


    return 0;
}
