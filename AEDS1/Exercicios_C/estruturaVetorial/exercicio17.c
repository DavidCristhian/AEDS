/*
Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.
*/

#include<stdio.h>
#define tam_Vet 5

void lerVetor(int vet[]){
    for (int i = 0; i < tam_Vet; i++)
    {
        printf("Digite o %d valor: \n", i + 1);
        scanf("%d" , &vet[i]);
    }
}

void imprimirPosicoesValoresPares(int vet[]){
    for (int i = 0; i < tam_Vet; i++)
    {
        if(vet[i] % 2 == 0){
            printf("%p\n" , &vet[i]);
        }
    }
}

int main(){
    int vet[tam_Vet];

    lerVetor(vet);
    imprimirPosicoesValoresPares(vet);

    return 0;
}