/*
Calcular o seu peso ideal, sabendo que:
Peso Ideal de pessoas de gênero masculino: (72,7 x altura) – 58
Peso Ideal de pessoas de gênero feminino: (62,1 x altura) – 44,7
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("=== Calc peso ideal ===\n");

    float pesoIdealM , pesoIdealF, altura;

    printf("Digite a altura: \n");
    scanf("%f" , &altura);

    pesoIdealM = (72.7 * altura) - 58;
    pesoIdealF = (62.1 * altura) - 44.7;

    printf("Estima-se que o peso ideal masculino com a altura: %.2f equivale a: %.2f\n" , altura , pesoIdealM);
    printf("Estima-se que o peso ideal feminino com a altura: %.2f equivale a: %.2f\n" , altura , pesoIdealF);

    return 0;
}