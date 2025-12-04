#include <stdio.h>
#include <string.h>

void bubbleSort(int v[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int start;
    char palavra[50];
    int numero;
    
    while (scanf("%d", &start) != EOF) {

        if (start != 1)
            continue;

        int pacotes[100000];
        int qtd = 0;

        while (1) {
            scanf("%s", palavra);

            if (strcmp(palavra, "0") == 0) {
                break;
            }

            scanf("%d", &numero);
            pacotes[qtd++] = numero;
        }

        bubbleSort(pacotes, qtd);

        for (int i = 0; i < qtd; i++) {
            printf("Package %03d\n", pacotes[i]);
        }

        printf("\n");
    }

    return 0;
}
