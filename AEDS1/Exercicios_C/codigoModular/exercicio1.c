/*
Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 2, 4, 6, 8, 10, 12, . . ..
*/

#include<stdio.h>

int sequenciaN_Termos(int n){
    int ultimo_Termo = 2;

    for(int i = 1; i < n; i ++){
        ultimo_Termo += 2;
    }

    return ultimo_Termo;
}

int main(){
    printf("=== Sequencia ===\n");
    int num;

    do{
        printf("Digite o numero de termos, para a sequencia: \n");
        scanf("%d" , &num);
    }while(num < 1);

    printf("O %d termo da sequencia e: %d\n", num, sequenciaN_Termos(num));

    return 0;
}