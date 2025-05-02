/*
Escreva um programa em C para imprimir a série Fibonacci usando recursão.
*/

#include<stdio.h>

int calc_FibonacciRec(int num){
    if(num == 0){
        return 0;
    }else if(num == 1){
        return 1;
    }else{
        return calc_FibonacciRec(num - 1) + calc_FibonacciRec(num - 2);
    }
}

int main(){
    printf("=== Fibonacci / Recursiva ===\n");
    int qt_Termos;

    do{
        printf("Digite a quantidade de termos: \n");
        scanf("%d" , &qt_Termos);
    }while(qt_Termos < 0);

    for(int i = 0; i < qt_Termos; i++){
        printf("%d " , calc_FibonacciRec(i));
    }

    return 0;
}