/*
Crie um programa que utilize a o código de Cesar para três posições. Entre com uma
string e imprima a string criptografada.
*/

#include <stdio.h>
#include <string.h>

#define TAM_STR 100

void lerString(char *str) {
    printf("Digite a mensagem a ser criptografada:\n");
    fgets(str, TAM_STR, stdin);

    // Remove o '\n' se estiver presente
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void cifraDeCesar(char *str, int deslocamento) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z') {
            // Letra maiúscula
            str[i] = ((c - 'A' + deslocamento) % 26) + 'A';
        } else if (c >= 'a' && c <= 'z') {
            // Letra minúscula
            str[i] = ((c - 'a' + deslocamento) % 26) + 'a';
        }
        // Outros caracteres (espaços, pontuação etc.) permanecem inalterados
    }
}

int main() {
    char mensagem[TAM_STR];
    int deslocamento = 3;

    lerString(mensagem);
    cifraDeCesar(mensagem, deslocamento);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
