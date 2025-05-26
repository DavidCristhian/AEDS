// Faça um algoritmo para percorrer uma string e imprimir apenas as vogais.

#include<stdio.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite a sua mensagem: \n");
    scanf("%[^\n]" , str);
}

void imprimirVogaisString(char *str){
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for(int i = 0; str[i] != '\0'; i++){
        for(int j = 0; j < 10; j++){
            if(str[i] == vogais[j]){
                printf("%c ", vogais[j]);
            }
        }
    }
}

int main(){
    char str[TAM_STR];

    lerString(str);
    printf("Vogais da mensagem: \n");
    imprimirVogaisString(str);

    return 0;
}