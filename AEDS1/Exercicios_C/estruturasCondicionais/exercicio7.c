/*
Ler dois caracteres e escrevê-los em ordem alfabética.
*/

#include <stdio.h>
int main(){
    printf("=== Organiza caracteres em ordem alfabetica ===\n");
    char letra1, letra2;

    printf("Digite o primeiro caractere, e depois o segundo: \n");
    scanf(" %c %c" , &letra1, &letra2);

    if(letra1 > letra2){
        printf("As letras digitadas foram: %c%c\n" , letra1, letra2);
        printf("Em ordem alfabetica fica: %c%c\n" , letra2, letra1);
    } else{
        printf("As letras digitadas foram: %c%c\n" , letra1, letra2);
        printf("Em ordem alfabetica fica: %c%c\n" , letra1, letra2);
    }

    return 0;
}