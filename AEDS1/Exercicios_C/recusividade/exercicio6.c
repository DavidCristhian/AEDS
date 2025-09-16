/*
Crie um programa recursivo, que calcule potencia, descarte valores negativos.
*/

#include <stdio.h>

int calc_potenciaRec(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * calc_potenciaRec(base, expoente - 1);
    }
}

int main() {
    int base, expoente, result;

    printf("=== Potenciação Recursiva ===\n");

    do {
        printf("Digite a base (inteiro positivo) e o expoente (inteiro >= 0): \n");
        scanf("%d%d", &base, &expoente);
    } while (base < 0 || expoente < 0);  // Agora também valida expoente

    result = calc_potenciaRec(base, expoente);

    printf("%d ^ %d = %d\n", base, expoente, result);

    return 0;
}
