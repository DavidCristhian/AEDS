/*
Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7,
9, ...
*/

#include<stdio.h>

int main(){
    printf("=== Sequencia ===\n");
    int qt_Termos;

    do{
        printf("Digite a quantidade de termos da sequencia: \n");
        scanf("%d" , &qt_Termos);
    }while(qt_Termos < 1);

    for(int i = 1; i <= qt_Termos; i += 2){
        printf("%d\n" , i);
    }

    return 0;
}