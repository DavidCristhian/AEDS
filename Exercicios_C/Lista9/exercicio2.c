/*
Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include<stdio.h>

int main(){
    int var1, var2;
    int *ptrVar1 = &var1;
    int *ptrVar2 = &var2;

    printf("Digite o 1- valor: \n");
    scanf("%d" , &var1);
    printf("Digite o 2- valor: \n");
    scanf("%d" , &var2);

    if(*ptrVar1 > *ptrVar2){
        printf("Endereço de var1: %p" , ptrVar1);
    }else{
        printf("Endereço de var2: %p\n" , ptrVar2);
    }

    return 0;
}