/*
Calcular e escrever a potenciação. A base e o expoente deverão ser valores lidos – rejeitar a leitura de
valores inválidos.
Considere: base um valor real.
Expoente: um número natural: inteiro, positivo ou nulo(zero).
Obs: Não usar a biblioteca math.h. A potenciação deverá ser calculada de forma iterativa.
*/

#include<stdio.h>

int main(){
    printf("=== Potencias ===\n");
    float base, result = 1;
    int expoente;

    do{
        printf("Digite a base, e depois o expoente: \n");
        scanf("%f%d" , &base, &expoente);
    }while(expoente < 0);

    for(int i = 0; i < expoente; i++){
        result *= base;
    }

    printf("O resultado da potencia e: %.0f\n", result);

    return 0;
}