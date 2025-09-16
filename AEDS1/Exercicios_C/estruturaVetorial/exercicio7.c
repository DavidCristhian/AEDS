/*
Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores e,
em seguida, organize os números do vetor em ordem crescente e escreva o vetor ordenado.
Exemplo de execução:
Entrada: 9.5 3.1 6.7 2.2 8.0 1.5 4.8 7.3 5.0 0.9
Saída:
Vetor ordenado: 0.9 1.5 2.2 3.1 4.8 5.0 6.7 7.3 8.0 9.5
*/

#include <stdio.h>
#define TAMANHO_VET 10

void ler_Vetor(float vet[TAMANHO_VET]) {
    for (int i = 0; i < TAMANHO_VET; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &vet[i]);
    }
}

void ordenar_Vetor_Crescente(float vet[TAMANHO_VET]) {
    float aux;
    for (int i = 0; i < TAMANHO_VET - 1; i++) {
        for (int j = i + 1; j < TAMANHO_VET; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void imprimir_Vetor(float vet[TAMANHO_VET]) {
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAMANHO_VET; i++) {
        printf("%.1f ", vet[i]);
    }
    printf("\n");
}

int main() {
    printf("=== Ordenar vetor de forma crescente ===\n");
    float vet[TAMANHO_VET];

    ler_Vetor(vet);
    ordenar_Vetor_Crescente(vet);
    imprimir_Vetor(vet);

    return 0;
}