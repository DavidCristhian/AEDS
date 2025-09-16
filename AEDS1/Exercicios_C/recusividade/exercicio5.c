/*
Crie uma função recursiva que calcule a soma dos números inteiros de n até m, sendo n e m limites
inferior e superior, respectivamente.
Planeje, cuidadosamente, sua solução, de forma que as funções implementem funcionalidades
atômicas.
*/

#include <stdio.h>

int somaRec(int n, int m) {
    if (n > m) return 0;        // Caso base: se n passou de m, para a recursão
    return n + somaRec(n + 1, m);  // Soma atual + chamada recursiva
}

int main() {
    int n, m;

    printf("Digite dois números inteiros (n e m): ");
    scanf("%d %d", &n, &m);

    printf("Soma de %d até %d = %d\n", n, m, somaRec(n, m));

    return 0;
}