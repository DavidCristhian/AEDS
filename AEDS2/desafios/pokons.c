#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int A[101], B[101], C[101];

        // Leitura das pilhas (topo -> fundo)
        for (int i = 0; i < N; i++) {
            scanf("%d %d %d", &A[i], &B[i], &C[i]);
        }

        int topo = 0; // índice do topo
        int ganhou = 1;

        while (topo < N) {

            int a = A[topo];
            int b = B[topo];
            int c = C[topo];

            int removido = 0;

            // tenta remover 3 cartas
            if ((a + b + c) % 3 == 0) {
                removido = 1;
            }
            // tenta remover 2 cartas
            else if ((a + b) % 3 == 0) {
                removido = 1;
            }
            else if ((a + c) % 3 == 0) {
                removido = 1;
            }
            else if ((b + c) % 3 == 0) {
                removido = 1;
            }
            // tenta remover 1 carta
            else if (a % 3 == 0) {
                removido = 1;
            }
            else if (b % 3 == 0) {
                removido = 1;
            }
            else if (c % 3 == 0) {
                removido = 1;
            }

            if (!removido) {
                ganhou = 0;
                break;
            }

            topo++; // remove o nível inteiro
        }

        printf("%d\n", ganhou);
    }

    return 0;
}
