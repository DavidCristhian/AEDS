/*
Faça um programa para calcular o N -ésimo termo da sequência de Fibonacci (1, 1, 2, 3,
5, 8, 13, 21, ...).
*/

#include<stdio.h>

int main(){
    printf("=== Fibonacci ===\n");
    int fibonacci, qt_Termos, a = 0, b = 1, c;

    do{
        printf("Digite a quantidade de termos: \n");
        scanf("%d" , &qt_Termos);
    }while(qt_Termos < 1);

    for(int i = 0; i < qt_Termos; i++){
        c = a + b;
        a = b;
        b = c;
        fibonacci = c;
    }

    printf("O %d° termo da sequência de Fibonacci é: %d\n", qt_Termos, fibonacci);

    return 0;
}