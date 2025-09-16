/*
er três números reais a, b e c e mostrar o valor de y sendo y = a + (b / (c + a)) + 2 ∗ (a − b) + log2(64).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("=== Calc a seguinte operacao: y = a + (b / (c + a)) + 2 ∗ (a − b) + log2(64) ===\n");

    float a, b, c, y;

    printf("Digite o valor de a, b e c: ");
    scanf("%f%f%f" , &a, &b, &c);

    y = a + (b / (c + a)) + 2 * (a - b) + log2(64);

    printf("O valor de y equivale a: %.21f" , y);
    
    return 0;
}