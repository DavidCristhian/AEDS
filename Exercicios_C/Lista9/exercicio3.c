/*
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis
A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor
de A.
*/

#include<stdio.h>

int lerValor(){
    int num; 

    printf("Digite o valor: \n");
    scanf("%d" , &num);

    return num;
}

void mudarValores(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int var1, var2;


    var1 = lerValor();
    var2 = lerValor();

    printf("Valores originais: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    mudarValores(&var1, &var2);

    printf("Novos valores: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    return 0;
}