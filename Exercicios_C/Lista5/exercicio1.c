/*
Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5,
*/

#include <stdio.h>

void contagemRec(int num){
    if(num == 5){
        printf("%d " , num);
    } else{
        printf("%d " , num);
        contagemRec(num + 1);
    }
}

int main(){
    printf("=== Sequencia recursiva ===\n");

    contagemRec(1);

    return 0;
}