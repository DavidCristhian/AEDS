/*
Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres
das strings.
*/

#include <stdio.h>

// Função que verifica se str2 ocorre dentro de str1
int ocorreDentro(char *str1, char *str2) {
    while (*str1 != '\0') {
        char *p1 = str1;
        char *p2 = str2;

        // Comparando caractere por caractere
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        // Se chegamos ao fim de str2, encontramos a substring
        if (*p2 == '\0') {
            return 1;  // Verdadeiro
        }

        str1++; // Avança para o próximo caractere da str1
    }

    return 0; // Não encontrou
}

int main() {
    char str1[100], str2[100];

    printf("Digite a string principal: ");
    scanf(" %[^\n]", str1);

    printf("Digite a string a ser procurada: ");
    scanf(" %[^\n]", str2);

    if (ocorreDentro(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NÃO ocorre dentro da primeira.\n");
    }

    return 0;
}
