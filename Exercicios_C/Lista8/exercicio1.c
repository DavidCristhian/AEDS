// Faça um programa que leia e imprima uma string

#include <stdio.h>
#define TAM_STR 50

void lerString(char *str) {
    printf("Digite uma mensagem: ");
    fgets(str, TAM_STR, stdin); 
}

void imprimirString(char *str) {
    printf("String completa: %s", str); 
}

void imprimirCaracteres(char *str) {
    int i = 0;
    printf("Caracteres da string: ");
    while (str[i] != '\0' && str[i] != '\n') { 
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char mensagem[TAM_STR];

    lerString(mensagem);
    imprimirString(mensagem);
    imprimirCaracteres(mensagem);

    return 0;
}
