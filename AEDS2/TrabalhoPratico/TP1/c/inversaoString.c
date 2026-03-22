#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Função para verificar se string é flag de saída
bool ehFlag(char* str){
    return (str[0] == 'F' && str[1] == 'I' && str[2] == 'M' && str[3] == '\0');
}

// Função que retorna tamanho da string
int tamString(char* str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

// Função para inverter string
char* inverterString(char* str){
    int tam = tamString(str);

    char* strInvertida = (char*) malloc((tam + 1) * sizeof(char));
    if(strInvertida == NULL) return NULL;

    int i = 0;
    for(int j = tam - 1; j >= 0; j--){
        strInvertida[i++] = str[j];
    }

    strInvertida[i] = '\0';
    return strInvertida;
} 

int main(){
    char str[1000];

    while(scanf(" %999[^\n]" , str) != EOF && !ehFlag(str)){
        char *strInvertida = inverterString(str);

        if(strInvertida != NULL){
            printf("%s\n" , strInvertida);
            free(strInvertida);
        }
    }

    return 0;
}