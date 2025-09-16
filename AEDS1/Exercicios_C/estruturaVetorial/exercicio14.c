/*
Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase
(máx. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais,
isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma
função void (procedimento) para realizar a troca e uma função para realizar a impressão
da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.
*/

#include <stdio.h>

void lerString(char *str){
    printf("Digite uma mensagem: ");
    scanf("%s", str);
}

void imprimirString(char *str){
    printf("Mensagem digitada: %s\n", str);
}

int contarCaracteres(char *str){
    int cont = 0;
    while(*str != '\0'){
        cont++;
        str++;
    }

    return cont;
}

void imprimirMensagemCaracteresTrocados(char *str, int tam){
    char strTrocada[tam];

    for(int i = 0; i < tam; i++){
        strTrocada[i] = *(str + i);
    }

    for(int i = 0; i < tam; i++){
        if(*(str + i) == 'a') strTrocada[i] = 'u';
        else if(*(str + i) == 'e') strTrocada[i] = 'o';
        else if(*(str + i) == 'i') strTrocada[i] = 'u';
        else if(*(str + i) == 'o') strTrocada[i] = 'a';
        else if(*(str + i) == 'u') strTrocada[i] = 'e';
    }

    imprimirString(strTrocada);
}

int main(){
    char str[100];
    int tamStr;

    lerString(str);
    imprimirString(str);

    tamStr = contarCaracteres(str);

    imprimirMensagemCaracteresTrocados(str, tamStr);

    return 0;
}
