/*
Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
*/

#include <stdio.h>

void contagemRec(int num){
    if(num == 5){
        printf("%d " , num);
        printf("%d " , num);
    } else{
        printf("%d " , num);
        contagemRec(num + 1);
        printf("%d " , num);
    }
}

int main(){
    printf("=== Sequencia recursiva ===\n");

    contagemRec(1);

    return 0;
}