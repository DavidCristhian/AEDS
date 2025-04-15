/*
Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7.
*/

#include <stdio.h>

int main(){
    printf("=== Verifica se o numero e divisivel por 7 ===\n");
    int num;

    printf("Digite o numero: \n");
    scanf("%d" , &num);

    if(num % 7 == 0){
        printf("O numero e divisivel por 7!\n");
    } else{
        printf("O numero nao e divisivel por 7\n");
    }

    return 0;
}