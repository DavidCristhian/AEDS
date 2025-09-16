/*
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.
*/

#include<stdio.h>
#define tam_Vet 10

void lerVetor(float vet[]){
    for (int i = 0; i < tam_Vet; i++)
    {
        printf("Digite o %d valor: \n" , i + 1);
        scanf("%f" , &vet[i]);
    }
}

void imprimirEnderecosVetor(float vet[]){
    for (int i = 0; i < tam_Vet; i++)
    {
        printf("%p\n" , &vet[i]);
    }
}

int main(){
    float vet[tam_Vet];

    lerVetor(vet);
    imprimirEnderecosVetor(vet);

    return 0;
}