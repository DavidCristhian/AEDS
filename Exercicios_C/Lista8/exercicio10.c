// Escreva um programa que leia duas strings e as imprima em ordem alfabética.

#include <stdio.h>
#define TAM_STR 50

void lerString(char *str) {
    printf("Digite uma string: ");
    scanf(" %[^\n]", str);
}

int compararStrings(char *str1, char *str2) {
    int i = 0;

    // Compara caractere por caractere
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1; // str1 vem antes
        } else if (str1[i] > str2[i]) {
            return 1;  // str2 vem antes
        }
        i++;
    }

    // Se os prefixos são iguais, a menor string (mais curta) vem antes
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Iguais
    } else if (str1[i] == '\0') {
        return -1; // str1 é menor
    } else {
        return 1;  // str2 é menor
    }
}

void imprimirEmOrdemAlfabetica(char *str1, char *str2) {
    int resultado = compararStrings(str1, str2);

    if (resultado <= 0) {
        printf("Ordem alfabética:\n%s\n%s\n", str1, str2);
    } else {
        printf("Ordem alfabética:\n%s\n%s\n", str2, str1);
    }
}

int main() {
    char str1[TAM_STR], str2[TAM_STR];

    lerString(str1);
    lerString(str2);

    imprimirEmOrdemAlfabetica(str1, str2);

    return 0;
}
