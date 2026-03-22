#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Funçao para verificar se a string e a flag de encerramento de programa
bool ehFlag(char *str){
    return (str[0] == 'F' && str[1] == 'I' && str[2] == 'M' && str[3] == '\0');
}

// Funçao para transformar string em in
int stringToInt(char *str){
    int i = 0;
    int num = 0;
    int sinal = 1;

    if(str[i] == '-'){
        sinal = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        char c = str[i];

        if(c >= '0' && c <= '9'){
            num = (num * 10) + (c - '0');
        }
        i++;
    }
    
    return num * sinal;
}

// Funçao para somar o resto de divizao por 10 de um numero int
int somaDigitos(int num){
    int soma = 0;

    while(num >  0){
        soma += (num % 10);
        num = num / 10;
    }

    return soma;
}


int main(){
    char str[1000];
    int num = 0;

    if(scanf(" %999[^\n]", str) == EOF) return 0;
    while (!ehFlag(str))
    {
        num = stringToInt(str);
        printf("%d\n" , somaDigitos(num));
        if(scanf(" %999[^\n]", str) == EOF) break;
    }

    return 0;
}