/*
Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ci-
framento de César.
*/

#include <stdio.h>

int main() {
    char mensagem;

    printf("=== Criptografando mensagem ===\n");
    printf("Digite a mensagem:\n");

    printf("Mensagem criptografada:\n");
    while ((mensagem = getchar()) != '\n') {
        printf("%c", mensagem + 3);
    }

    return 0;
}