/*
Ler dois valores reais, determinar e escrever o menor e o maior.
*/

#include <stdio.h>

int main(){
    printf("=== Maior / Menor / Valor ===\n");

    float num1, num2, maior, menor;

    printf("Digite o primeiro valor, e depois o segundo: ");
    scanf("%f%f" , &num1, &num2);

    if(num1 > num2){
        maior = num1;
        menor = num2;
    } else{
        maior = num2;
        menor = num1;
    }

    printf("O maior numero entre %.2f e %.2f e: %.2f\n" , num1, num2, maior);
    printf("O menor numero entre %.2f e %.2f e: %.2f\n" , num1, num2, menor);

    return 0;
}