/*
Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, em seguida, conte e escreva quantos números pares existem no vetor.
Exemplo de execução:
Entrada: 1 2 3 4 5 6 7 8 9 10
Saída:
Quantidade de números pares: 5
*/

#include<stdio.h>
#define tamanho_Vet 10

void ler_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d" , &vet[i]);
    }
}

int count_Pares_Vetor(int vet[tamanho_Vet]){
    int count_Pares = 0;
    for(int i = 0; i < tamanho_Vet; i++){
        if(vet[i] % 2 == 0) count_Pares ++;
    }
    return count_Pares;
}

int main(){
    printf("=== Contador de pares em vetor ===\n");
    int vet[tamanho_Vet], count_Pares;

    ler_Vetor(vet);
    count_Pares = count_Pares_Vetor(vet);

    printf("No vetor a %d numeros pares\n" , count_Pares);

    return 0;
}