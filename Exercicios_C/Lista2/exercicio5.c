/*
Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o
valor de I na tela, decremente o valor de I em duas unidades e enquanto R menor que
10, imprima os valores de R e I na tela e incremente o valor de R em uma unidade.
*/

#include<stdio.h>

int main(){
    printf("=== Logica ===\n");
    int numInt;
    float numFloat;

    printf("Digite o valor do numero inteiro: \n");
    scanf("%d" , &numInt);
    printf("Digite o numero real: \n");
    scanf("%f" , &numFloat);

    while(numInt > 10){
        printf("Numero inteiro: %d\n" , numInt);
        numInt = numInt - 2;

        if(numFloat < 10){
            printf("Numero inteiro: %d\n" , numInt);
            printf("Numero real: %.2f\n" , numFloat);
            numFloat = numFloat + 1;
        }
    }


    return 0;
}