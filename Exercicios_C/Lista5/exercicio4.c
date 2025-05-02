/*
Construa uma função recursiva que escreva em ordem decrescente os inteiros de N até 0.
Argumento da função: um inteiro relativo ao valor de N.
Retorno: vazio
Teste a sua função a partir da função principal. Planeje uma função específica para ler do teclado o
valor de N.
*/

#include<stdio.h>

void contagem_RegressivaRec(int n){
    if(n == 0){
        printf("%d" , n);
    } else{
        printf("%d " , n);
        contagem_RegressivaRec(n - 1);
    }
}

int main(){
    printf("=== Sequencia regressiva / recursiva ===\n");
    int n;

    do{
        printf("Digite um numero natural: \n");
        scanf("%d" , &n);
    }while(n < 0);

    contagem_RegressivaRec(n);

    return 0;
}