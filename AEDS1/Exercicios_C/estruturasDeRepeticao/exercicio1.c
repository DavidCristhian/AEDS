/*
Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de
deve ser lido do teclado.
*/

#include<stdio.h>

int main(){
    printf("=== Soma de numeros ===\n");
    int n_Temos, num, soma = 0;

    do{
        printf("Digite a quantidade de numeros: \n");
        scanf("%d" , &n_Temos);
    } while(n_Temos < 1);

    for(int i = 0; i < n_Temos; i++){
        printf("Digite o %d numero: \n" , i + 1);
        scanf("%d" , &num);
        soma += num;
    }

    printf("A soma dos numeros digitados, equivale a: %d\n" , soma);

    return 0;
}