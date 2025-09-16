/*
Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando quantas vezes a segunda string lida está contida dentro da primeira.
*/

#include <stdio.h>
#include <string.h>

#define TAM_STR 50

void lerString(char *str) {
    printf("Digite a sua mensagem:\n");
    scanf(" %[^\n]", str);
}

int qtStringContida(char *str1, char *str2) {
    int contador = 0, i, j;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char str1[TAM_STR], str2[TAM_STR];

    printf("Frase:\n");
    lerString(str1);
    printf("Trecho a ser comparado:\n");
    lerString(str2);

    int resultado = qtStringContida(str1, str2);
    printf("Numero de vezes que o trecho se repetiu na mensagem base: %d\n", resultado);

    return 0;
}
