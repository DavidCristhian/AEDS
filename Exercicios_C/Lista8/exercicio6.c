/*
Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando se a segunda string lida está contida dentro da primeira.
*/

#include <stdio.h>
#include <stdbool.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite uma mensagem: ");
    fgets(str, TAM_STR, stdin);

    // Remove o '\n' se houver
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

bool stringContida(char *str1, char *str2) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j])
                break;
        }
        if (str2[j] == '\0') return true;
    }
    return false;
}

int main() {
    char str1[TAM_STR], str2[TAM_STR];

    printf("Frase base:\n");
    lerString(str1);

    printf("Trecho a ser buscado:\n");
    lerString(str2);

    if (stringContida(str1, str2)) {
        printf("A segunda mensagem está presente na primeira.\n");
    } else {
        printf("A segunda mensagem NÃO está presente na primeira.\n");
    }

    return 0;
}
