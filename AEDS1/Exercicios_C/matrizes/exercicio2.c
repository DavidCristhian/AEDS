/*
Implemente uma função que identifique o maior valor presente na linha i de uma matriz de reais, sendo i
também um argumento da função.
Argumentos: o endereço da matriz de reais e um valor inteiro relativo à linha chave da pesquisa
Valor gerado: um valor real correspondente ao maior valor encontrado na linha
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
            printf("%f " , m[i][j]);
        }
        printf("\n");
    }
}

int linha_valida(int linha) {
    return linha >= 0 && linha < max_lin;
}

float maior_valor_linha(float m[max_lin][max_col], int linha){
    if (linha_valida(linha)) {
        float maior_valor = m[linha][0];
        for (int i = 1; i < max_col; i++) {
            if (m[linha][i] > maior_valor) {
                maior_valor = m[linha][i];
            }
        }
        return maior_valor;
    } else {
        printf("Linha incompativel!\n");
        return 0;
    }
}

int main(){
    float matriz[max_lin][max_col];
    int linha;
    
    printf("Digite a linha: \n");
    scanf("%d" , &linha);

    ler_matriz(matriz);
    imprimir_matriz(matriz);

    maior_valor_linha(matriz, linha);

}