/*
Crie dois vetores para armazenar 10 números inteiros cada. Solicite que o usuário insira
os valores e, em seguida, crie e escreva um terceiro vetor que contenha apenas os números
que aparecem em ambos os vetores (interseção).
*/

#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_VET 10

void ler_Valor_Vetor(int vet[TAMANHO_VET]) {
    for (int i = 0; i < TAMANHO_VET; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

void interseccao_Vetores(int vet1[TAMANHO_VET], int vet2[TAMANHO_VET], int vet3[TAMANHO_VET], int *tam_intersec) {
    *tam_intersec = 0;

    for (int i = 0; i < TAMANHO_VET; i++) {
        for (int j = 0; j < TAMANHO_VET; j++) {
            if (vet1[i] == vet2[j]) {
                // Verificar se já foi inserido no vet3
                bool jaExiste = false;
                for (int k = 0; k < *tam_intersec; k++) {
                    if (vet3[k] == vet1[i]) {
                        jaExiste = true;
                        break;
                    }
                }
                if (!jaExiste) {
                    vet3[*tam_intersec] = vet1[i];
                    (*tam_intersec)++;
                }
                break; // já encontrou em vet2, não precisa continuar
            }
        }
    }
}

void imprimir_Vetor(int vet[], int tamanho) {
    printf("Interseção dos vetores: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    printf("=== Interseção de Vetores ===\n");

    int vet1[TAMANHO_VET], vet2[TAMANHO_VET], vet3[TAMANHO_VET];
    int tamanho_intersec;

    ler_Valor_Vetor(vet1);
    ler_Valor_Vetor(vet2);

    interseccao_Vetores(vet1, vet2, vet3, &tamanho_intersec);

    imprimir_Vetor(vet3, tamanho_intersec);

    return 0;
}
