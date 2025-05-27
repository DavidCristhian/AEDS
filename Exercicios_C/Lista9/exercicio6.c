/*
Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.
*/

#include<stdio.h>

int lerValor(){
    int num; 

    printf("Digite o valor: \n");
    scanf("%d" , &num);

    return num;
}

void somaEmPrimeiraVariavel(int *a, int *b){
    *a = *a + *b;
}

int main(){
    int var1, var2;


    var1 = lerValor();
    var2 = lerValor();

    printf("Valores originais: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    somaEmPrimeiraVariavel(&var1, &var2);

    printf("Novos valores: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);


    return 0;
}