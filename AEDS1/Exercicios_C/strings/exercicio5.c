/*
Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada
dentro da mesma variável. Em seguida, imprima a string invertida.
*/

#include<stdio.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite uma mensagem: \n");
    fgets(str, TAM_STR, stdin);
}

void imprimirString(char *str){
    printf("%s\n" , str);
}

int tamanhoString(char *str){
    int contador = 0;
    while (str[contador] != '\0' && str[contador] != '\n'){
        contador++;
    }

    return contador;
}

void inverterString(char *str, int tamanhoString){
    char aux;
    for(int i = 0; i < tamanhoString; i++){
        aux = str[i];
        str[i] = str[tamanhoString];
        str[tamanhoString] = aux;
        tamanhoString--;
    }
}

int main(){
    char mensagem[TAM_STR];
    int tamanhoStr;

    lerString(mensagem);
    imprimirString(mensagem);

    tamanhoStr = tamanhoString(mensagem);
    
    inverterString(mensagem, tamanhoStr);
    imprimirString(mensagem);

    return 0;
}