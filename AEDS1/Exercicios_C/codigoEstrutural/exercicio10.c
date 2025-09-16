/*
Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar
quantos salários mínimos essa pessoa ganha.
*/

#include <stdio.h>

int main(){
    printf("=== Calc quantidade salarios minimos ===\n");

    float salario_Pessoa, salario_Minimo, qt_Salario_Minimo;

    printf("Digite o valor do salario: \n");
    scanf("%f" , &salario_Pessoa);
    printf("Digite o valor do salario minimo: ");
    scanf("%f" , &salario_Minimo);

    qt_Salario_Minimo = salario_Pessoa / salario_Minimo;

    printf("Dentro do salario: %.2f a %.2f salarios minimos" , salario_Pessoa, qt_Salario_Minimo);

    return 0;
}