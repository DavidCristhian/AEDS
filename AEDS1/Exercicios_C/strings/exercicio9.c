/*
Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um
palindromo ou nao.
*/

/*
Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um
palindromo ou nao.
*/

#include<stdio.h>
#include<stdbool.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite a sua mensagem: \n");
    scanf(" %[^\n]", str);
}

int verificaTamanhoString(char *str){
    int contadorCaracteres = 0;

    for(int i = 0; str[i] != '\0'; i++){
        contadorCaracteres++;
    }

    return contadorCaracteres;
}

bool verificaPalindromo(char *str){
    bool ehPalindromo = true;
    int i;
    int j = verificaTamanhoString(str);

    for(i = 0; i < j; i++){
        if(str[i] != str[j - 1]){
            ehPalindromo = false;
        }
        j--;
    }

    return ehPalindromo;
}

int main(){
    char str[TAM_STR];

    lerString(str);

    if(verificaPalindromo(str)){
        printf("A valavra %s e palaindroma!\n" , str);
    } else{
        printf("A palavra %s não é palindroma!\n" , str);
    }

    return 0;
}