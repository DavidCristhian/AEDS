/*
Crie uma função recursiva que calcule o fatorial de um número natural N.
*/

#include<stdio.h>

int calc_FatorialRec(int num){
    if(num == 0){
        return 1;
    }else{
        return num * calc_FatorialRec(num - 1);
    }
}

int main(){
    printf("=== Fatorial / Recursiva ===\n");
    int num, result;

    do{
        printf("Digite um numero, para calcular o fatorial do mesmo: \n");
        scanf("%d", &num);
        if(num < 0){
            printf("\nError: numero fora de dominio, tente novamente!\n");
        }
    }while(num < 0);

    result = calc_FatorialRec(num);

    printf("Fatorial de %d, equivale a: %d\n" , num, result);

    return 0;
}