/*
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exiba os valores ordenados na tela.
*/

#include <stdio.h>

int lerValor(){
    int num; 
    printf("Digite o valor: ");
    scanf("%d", &num);
    return num;
}

int ordenarValores(int *num1, int *num2, int *num3){
    int temp;

    // Ordenar os valores usando trocas simples (bubble)
    if (*num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    if (*num1 > *num3) {
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }

    if (*num2 > *num3) {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }

    // Verificar se todos são iguais
    if (*num1 == *num2 && *num2 == *num3)
        return 1;
    else
        return 0;
}

int main(){
    int num1, num2, num3;
    int iguais;

    num1 = lerValor();
    num2 = lerValor();
    num3 = lerValor();

    iguais = ordenarValores(&num1, &num2, &num3);

    printf("\nValores ordenados: %d %d %d\n", num1, num2, num3);

    if (iguais)
        printf("Todos os valores são iguais.\n");
    else
        printf("Os valores são diferentes.\n");

    return 0;
}
