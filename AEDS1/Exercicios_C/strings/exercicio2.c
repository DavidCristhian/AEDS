/*
Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/

#include<stdio.h>
#define TAM_STR 50

void lerString(char str[TAM_STR]){
    printf("Digite uma mensagem: \n");
    fgets(str, TAM_STR, stdin);
}

void imprimirQuatroPrimeirosCaracteres(char str[TAM_STR]){
    for(int i = 0; i < 4; i++){
        printf(" %c " , str[i]);
    }
}

int main(){
    char mensagem[TAM_STR];

    lerString(mensagem);
    imprimirQuatroPrimeirosCaracteres(mensagem);

    return 0;
}