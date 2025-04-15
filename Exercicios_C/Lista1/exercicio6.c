/*
Ler as medidas dos lados de um triângulo. Verificar e escrever se ele é EQUILÁTERO,
ISÓSCELES OU ESCALENO.
*/

#include <stdio.h>

int main(){
    printf("=== Verifica tipo do triangulo ===\n");
    float a, b, c;

    printf("Digite as tres medidas do triangulo: ");
    scanf("%f%f%f" , &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){
        if(a == b && b == c){
            printf("Este triangulo e equilatero\n");
        } else if(a != b && b != c && a != c){
            printf("Este escaleno\n");
        } else{
            printf("Este triangulo e isosceles\n");
        }
    } else{
        printf("As medidas digitadas nao podem gerar um triangulo\n");
    }

    return 0;
}