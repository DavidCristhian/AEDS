/*
Ler um número natural e verificar se é ele primo ou não. Um número natural é primo se é ele divisível
apenas por um e por si próprio.
Lembre-se que o conjunto dos números naturais é composto pelos valores inteiros e positivos.
Rejeitar a leitura de número inválido (não pertencente ao conjunto de números naturais).
Ao finalizar, permitir verificar um novo número, até que um número igual a zero (flag) seja fornecido.
Informar ao usuário ser o valor zero aquele que encerrará o programa.
*/

#include<stdio.h>

int main(){
    printf("=== Numero Primo ===\n");
    int num, num_Divisores = 1;

    do{
        printf("Digite um numero, ou digite 0 para finalizar o programa: \n");
        scanf("%d" , &num);

        num_Divisores = 1;

        for(int i = 2; i <= num; i++){
            if(num % i == 0){
                num_Divisores++;
            }
        }

        if(num >= 0){
            if(num_Divisores == 2){
                printf("O numero %d e primo\n" , num);
            }
            else{
                printf("O numero %d nao e primo\n" , num);
            }
        }
        else{
            printf("O numero digitado nao e valido\n");
        }
        
    }while(num < 0 || num != 0);



    return 0;
}