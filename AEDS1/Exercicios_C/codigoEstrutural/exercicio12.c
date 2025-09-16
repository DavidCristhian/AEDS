/*
Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena
e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve
ser armazenado em outra variável antes de ser mostrado.
*/

#include <stdio.h>

int main(){
    printf("=== Alteracao CDU p/ UDC ===\n");

    int cdu, c, d, u, udc;

    printf("Digite um numero no formato CDU: ");
    scanf("%d" , &cdu);

    c = cdu / 100;
    d = (cdu / 10) % 10;
    u = cdu % 10;

    udc = (u * 100) + (d * 10) + c;

    printf("%d CDU transformado em UDC equivale: %d" , cdu, udc);

    return 0;
}