/*
Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres
maiusculos.
*/

#include<stdio.h>
#define TAM_STR 50

void lerString(char *str){
    printf("Digite a sua mensagem: \n");
    scanf("%[^\n]" , str);
}

void imprimirQtCarcteresMaiusculos(char *str){
    int qtMaiusculos = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            qtMaiusculos++;
        }
    } 

    printf("Na mensagem %s a %d caracteres maiúsculos\n" , str, qtMaiusculos);
}

int main(){
    char str[TAM_STR];

    lerString(str);
    imprimirQtCarcteresMaiusculos(str);

    return 0;
}