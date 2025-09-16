/*
Faça um programa para imprimir os múltiplos de 5.
*/

#include<stdio.h>

int main(){
    printf("=== Multiplos de 5 ===\n");
    int result;

    for(int i = 0; i <= 10; i++){
        result = 5 * i;
        printf("5 x %d = %d\n" , i , result);
    }

    return 0;
}