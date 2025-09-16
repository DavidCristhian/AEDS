/*
Considere uma matriz 10 × 10 preenchida com números inteiros aleatórios de 1 a 100.
Implemente uma função para cada item pedido abaixo:
• Qual a coluna que contém a maior soma ?
• Qual a linha que contém o valor da menor soma ?
• Quantos primos menores do que 100 existem na matriz ?
• Quantos múltiplos de um dado número existem na matriz ?
• Quantos números na matriz são menores do que os seus 4 vizinhos diretos ? Note que
os elementos das primeira e últimas linhas e primeira e última colunas não devem
ser pesquisados, pois eles deixam de ter um ou mais vizinhos.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_lin 10
#define max_col 10

void ler_matriz(int m[max_lin][max_col]){
    for (int i = 0; i < max_lin; i++)
    {
        for (int j = 0; j < max_col; j++)
        {
            printf("Digite o elemento [%d][%d]: \n" , i, j);
            scanf("%d" , &m[i][j]);
        }
    }

}

void imprimir_matriz(int m[max_lin][max_col]){
    for (int i = 0; i < max_lin; i++)
    {
        for (int j = 0; j < max_col; j++)
        {
            printf(" %d " , m[i][j]);
        }
        printf("\n");
    }
}

void gerarMatrizAleatoria(int m[max_lin][max_col]){
    for(int i = 0; i < max_lin; i++){
        for (int j = 0; j < max_col; j++)
        {
            m[i][j] = rand() % 100 + 1;
        }
    }
}

void colunaComMaiorSoma(int m[max_lin][max_col]){
    int maior_soma = 0, soma = 0, coluna_maior = 0;
    for (int i = 0; i < max_col; i++)
    {
        for (int j = 0; j < max_lin; j++)
        {
            soma += m[j][i];
        }
        if(i == 0) maior_soma = soma;
        if(i != 0 && soma > maior_soma){
            maior_soma = soma;
            coluna_maior = i;
        } 
        soma = 0;
    }

    printf("\nMaior soma / coluna: %d\nColuna com maior soma: %d\n" , maior_soma, coluna_maior);
}

void linhaComMenorSoma(int m[max_lin][max_col]){
    int menor_soma = 0, soma = 0, linha_menor = 0;
    for (int i = 0; i < max_lin; i++)
    {
        for (int j = 0; j < max_col; j++)
        {
            soma += m[i][j];
        }
        if(i == 0) menor_soma = soma;
        if(i != 0 && soma < menor_soma){
            menor_soma = soma;
            linha_menor = i;
        }
        soma = 0;
    }
    printf("\nMenor soma / linha: %d\nColuna com menor soma: %d\n" , menor_soma, linha_menor);
}

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void contarPrimosMenoresQue100(int m[max_lin][max_col]){
    int contador = 0;
    for (int i = 0; i < max_lin; i++)
    {
        for (int j = 0; j < max_col; j++)
        {
            if (m[i][j] < 100 && eh_primo(m[i][j])) contador++;
        }
    }
    printf("\nForam encontrados %d numeros primos menores que 100\n" , contador);
}

void contarMultiplos(int m[max_lin][max_col], int num){
    int contador = 0;
    for (int i = 0; i < max_lin; i++)
    {
        for (int j = 0; j < max_col; j++)
        {
            if(m[i][j] % num == 0) contador++;
        }
    }
    printf("\nHá %d números múltiplos de %d\n", contador, num);
}

void contarMenoresQueVizinhos(int m[max_lin][max_col]){
    int contador = 0;

    for (int i = 1; i < max_lin - 1; i++) {
        for (int j = 1; j < max_col - 1; j++) {
            int atual = m[i][j];
            if (atual < m[i-1][j] && atual < m[i+1][j] &&
                atual < m[i][j-1] && atual < m[i][j+1]) {
                contador++;
            }
        }
    }

    printf("\nHá %d números menores que os seus 4 vizinhos diretos\n", contador);
}

int main(){
    int mat[max_lin][max_col], num;

    printf("Digite um número: ");
    scanf("%d" , &num);

    srand(time(NULL));

    gerarMatrizAleatoria(mat); 
    colunaComMaiorSoma(mat); 
    linhaComMenorSoma(mat); 
    contarPrimosMenoresQue100(mat); 
    contarMultiplos(mat, num); 
    contarMenoresQueVizinhos(mat); 

    return 0;
}