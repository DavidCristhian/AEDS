/*
Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
a sequência do exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve
utilizar a função par desenvolvida na questão anterior.
*/

#include<stdio.h>

void pares_Menores(int n){

    for(int i = n; i >= 0; i--){
        if(i % 2 == 0){
            printf("%d\n" , i);
        }
    }

}

int main(){
    printf("=== Pares menores ===\n");
    int num;

    do{
        printf("Digite um numero: \n");
        scanf("%d" , &num);
    }while(num < 0);

    pares_Menores(num);

    return 0;
}