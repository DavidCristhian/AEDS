/*
Faça um programa que leia uma string e a imprima de trás para frente.
*/

#include<stdio.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite uma mensagem: \n");
    fgets(str, TAM_STR, stdin);
}

void imprimirString(char *str){
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n'){
        printf("%c" , str[i]);
        i++;
    }
}

int tamanhoString(char *str){
    int contador = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n'){
        contador++;
        i++;
    }

    return contador;
}

void imprimirStringInverso(char *str, int tamanhoString){
    while(tamanhoString >= 0){
        printf("%c" , str[tamanhoString]);
        tamanhoString = tamanhoString - 1;
    }
}

int main(){
    char mensagem[TAM_STR], qtCaracteresString;

    lerString(mensagem);
    qtCaracteresString = tamanhoString(mensagem);
    printf("Mensagem: \n");
    imprimirString(mensagem);
    printf("Mensagem invertida: \n");
    imprimirStringInverso(mensagem, qtCaracteresString);

    return 0;
}