/*
Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
caracteres ela possui.
*/

#include<stdio.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite uma mensagem: \n");
    fgets(str, TAM_STR, stdin);
}

void contarCaracteres(char *str){
    int contador = 0, i = 0;
    while(str[i] != '\n' && str[i] != '\0'){
        contador++;
        i++;
    }

    printf("Na mensagem %s, a %d caracteres" , str, contador);
}

int main(){
    char mensagem[TAM_STR];

    lerString(mensagem);
    contarCaracteres(mensagem);

    return 0;
}