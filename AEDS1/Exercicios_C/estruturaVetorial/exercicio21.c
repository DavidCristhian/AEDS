/*
Implemente uma função que receba como parâmetro um array de números reais de tama-
nho N e retorne quantos números negativos há nesse array. Essa função deve obedecer
ao protótipo:
int negativos(float *vet, int N);
*/

#include <stdio.h>

int negativos(float *vet, int N) {
    int cont = 0;
    for (int i = 0; i < N; i++) {
        if (*(vet + i) < 0) {
            cont++;
        }
    }
    return cont;
}

int main() {
    float vetor[] = {-1.2, 3.4, -5.6, 7.8, -9.0};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int qtdNegativos = negativos(vetor, tamanho);

    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    return 0;
}
