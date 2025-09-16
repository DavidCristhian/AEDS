/*
Escreva um programa em C que leia 20 números do usuário, um número por vez. Após a
leitura de todos os números, o programa deve exibir o maior, o menor número entre eles
e a média.
*/

#include <stdio.h>
int main(){
    printf("=== Maior / Menor / Media ===\n");
    int num, maior, menor, soma = 0, media;

    for(int i = 1; i <= 5; i++){
        printf("Digite o %d-numero: " , i);
        scanf("%d" , &num);
        if(i == 1){
            maior = menor = num;
        }

        soma += num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }

    media = soma / 5;

    printf("O maior numero da sequencia, equivale a: %d\n" , maior);
    printf("O menor numero da sequencia, equivale a: %d\n" , menor);
    printf("A media entre esses numeros, equivale a: %d\n" , media);

    return 0;
}