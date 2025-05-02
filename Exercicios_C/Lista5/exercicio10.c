#include <stdio.h>

int count_DigitosRec(int num) {
    if (num < 0) num = -num; // Lida com número negativo
    if (num < 10) {
        return 1;
    } else {
        return 1 + count_DigitosRec(num / 10);
    }
}

int main() {
    printf("=== Contador de Dígitos (Recursivo) ===\n");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int count_Digits = count_DigitosRec(num);

    printf("O número %d possui %d dígito(s).\n", num, count_Digits);

    return 0;
}
