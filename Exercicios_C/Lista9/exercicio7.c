/*
Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase
(máx. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais,
isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma
função void (procedimento) para realizar a troca e uma função para realizar a impressão
da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.
*/

#include<stdio.h>
#define TAM_STR 100

void lerString(char *str){
    printf("Digite a sua mensagem: \n");
    scanf("%[^\n]" , str);
}

void imprimirString(char *str){
    printf("%s" , str);
}

void imprimirMensagemTrocandoVogais(char *str){
    char strTrocada[TAM_STR];

    for (int i = 0; str[i] != '\0'; i++){
        strTrocada[i] = str[i]; 
    }

    for (int i = 0; strTrocada[i] != '\0'; i++){
        if(strTrocada[i] == 'a'){
            strTrocada[i] = 'u';
        } else if(strTrocada[i] == 'e'){
            strTrocada[i] = 'o';
        } else if(strTrocada[i] == 'i'){
            strTrocada[i] = 'u';
        } else if(strTrocada[i] == 'o'){
            strTrocada[i] = 'a';
        } else if(strTrocada[i] == 'u'){
            strTrocada[i] = 'e';
        }
    }

    imprimirString(strTrocada);
}

int main(){
    char str[TAM_STR];

    lerString(str);
    imprimirMensagemTrocandoVogais(str);

    return 0;
}