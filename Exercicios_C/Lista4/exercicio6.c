/*
Construa um programa que calcule a área de um retângulo. Planeje, com calma, cada uma das funções
que deverão compor o programa: apresentação do objetivo do software; a leitura de cada um dos dados
necessários para solucionar o problema (base e altura), rejeitando a leitura de valores negativos; o
cálculo da área; a escrita do resultado e a função principal, encarregada de orquestrar o fluxo das
chamadas para atender ao propósito desta questão.
*/

#include<stdio.h>

float ler_Base_Retangulo(){
    float base;
    do{
        printf("Digite a base do retangulo: \n");
        scanf("%f" , &base);
    }while(base < 1);
    return base;
}

float ler_Altura_Retangulo(){
    float altura;
    do{
        printf("Digite a altura do retangulo: \n");
        scanf("%f" , &altura);
    }while(altura < 1);
    return altura;
}

float calc_Area_Retangulo(float base, float altura){
    return base * altura;
}

int main(){
    printf("=== Area de um retangulo ===\n");
    float area_Retangulo, base, altura;

    base = ler_Base_Retangulo();
    altura = ler_Altura_Retangulo();

    area_Retangulo = calc_Area_Retangulo(base, altura);
    printf("A area de um retangulo com\nbase: %.2f\ne altura: %.2f\nequivale a: %.2f" , base, altura, area_Retangulo);
    return 0;
}