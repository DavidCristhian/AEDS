/*
Ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a
raiz da equação.
*/

#include <stdio.h>

int main(){
    printf("=== Resolvendo a equacao (ax + b = 0) ===\n");
    float a, b, raiz;

    printf("Digite os coeficientes a e b: ");
    scanf("%f%f" , &a, &b);

    if(a != 0){ // pois x = -b / a
        raiz = -b / a;
        printf("A raiz da equacao, equivale a: %.2f" , raiz);
    } else{
        printf("Impossivel calcular a raiz da equacao!\n");
    }

    return 0;
}