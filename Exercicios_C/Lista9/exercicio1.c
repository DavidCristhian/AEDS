/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

#include<stdio.h>

int main(){
    int inteiro = 10; 
    int *ptrInteiro = &inteiro;
    float real = 10;
    float *ptrReal = &real;
    char caracter = 'a';
    char *ptrChar = &caracter;


    *ptrInteiro = 15;
    *ptrReal = 20;
    *ptrChar = 'B';

    printf("%d " , *ptrInteiro);
    printf("%.2f" , *ptrReal);
    printf(" %c" , *ptrChar);

    return 0;
}