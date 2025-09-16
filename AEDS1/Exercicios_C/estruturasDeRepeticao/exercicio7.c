/*
Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial
de N (N!)
*/

#include<stdio.h>

int main(){
    printf("=== Fatorial ===\n");
    int num, fatorial = 1;

    do{
        printf("Digite um numero, para calcular o fatorial do mesmo: \n");
        scanf("%d" , &num);
    }while(num < 0);

    for(int i = num; i >= 1; i--){
        fatorial *= i;
    }

    printf("O fatorial de %d, equivale a: %d" , num, fatorial);

    return 0;
}