/*
Fazer um programa para ler dois números reais e calcular e imprimir a diferença desses
números. Depois, se o segundo número for diferente de zero, fazer a divisão do primeiro
pelo segundo.
*/

#include <stdio.h>

int main(){
    printf("=== Amplitude / Divisao ===\n");
    float num1, num2, amplitude, divisao;

    printf("Digite o 1- numero, depois o 2- numero: ");
    scanf("%f%f" , &num1, &num2);

    amplitude = num1 - num2;

    if(num2 != 0){
        divisao = num1 / num2;
        printf("%.2f dividido por %.2f, resulta em: %.2f\n" , num1, num2, divisao);
    } else{
        printf("Infelizmente nao e possivel realizar divisao!\n");
    }

    printf("A diferenca entre %.2f e %.2f e de: %.2f" , num1, num2, amplitude);

    return 0;
}