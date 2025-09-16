/*
Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
variável. Escreva o conteúdo das 2 variáveis na tela.
*/

#include<stdio.h>

int lerValor(){
    int num; 

    printf("Digite o valor: \n");
    scanf("%d" , &num);

    return num;
}

void trocarMaiorValor(int *a, int *b){
    int tmp;
    if(*b > *a){
        tmp = *b;
        *b = *a;
        *a = tmp;
    }
}


int main(){
    int var1, var2;

    var1 = lerValor();
    var2 = lerValor();


    printf("Valores originais: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    trocarMaiorValor(&var1, &var2);

    printf("Novos valores: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    return 0;
}