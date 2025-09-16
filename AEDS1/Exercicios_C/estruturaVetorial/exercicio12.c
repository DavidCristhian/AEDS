/*
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.
*/

#include<stdio.h>

int lerValor(){
    int num; 

    printf("Digite o valor: \n");
    scanf("%d" , &num);

    return num;
}

int dobroDaSomaValores(int *a, int *b){
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main(){
    int var1, var2, somaDobro;


    var1 = lerValor();
    var2 = lerValor();

    printf("Valores originais: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    somaDobro = dobroDaSomaValores(&var1, &var2);

    printf("Novos valores: \n");
    printf("A: %d\n" , var1);
    printf("B: %d\n", var2);

    printf("A soma do dobro dos valores: %d" , somaDobro);

    return 0;
}