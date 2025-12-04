#include <stdio.h>

#define MOD 1000000007

void swap(int *vet, int i, int j) {
    int tmp = vet[i];
    vet[i] = vet[j];
    vet[j] = tmp;
}

void ordenarVetor(int *vet, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vet[i] > vet[j]) {
                swap(vet, i, j);
            }
        }
    }
}

int main() {
    int n, k;
    
    // Lê até EOF
    while (scanf("%d %d", &n, &k) != EOF) {

        int notas[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &notas[i]);
        }

        // Ordena o vetor (mesma lógica do Java)
        ordenarVetor(notas, n);

        // Soma as K maiores notas
        long long result = 0;
        for (int i = n - 1; i >= n - k; i--) {
            result = (result + notas[i]) % MOD;
        }

        printf("%lld\n", result);
    }

    return 0;
}
