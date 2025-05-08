/*
Crie um vetor para armazenar 15 números inteiros. Solicite que o usuário insira os valores
e, em seguida, calcule e escreva a soma de todos os números ímpares do vetor.
Exemplo de execução:
Entrada: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Saída:
Soma dos números ímpares: 64
*/

#include<stdio.h>
#define tamanho_Vet 15

void ler_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d" , &vet[i]);
    }
}

int soma_Impares_Vetor(int vet[tamanho_Vet]){
    int soma_Impares = 0;
    for(int i = 0; i < tamanho_Vet; i++){
        if(vet[i] % 2 == 1){
            soma_Impares += vet[i];
        }
    }
    return soma_Impares;
}

int main(){
    printf("=== Soma de numeros Impares em um vetor ===\n");
    int vet[tamanho_Vet], soma_Impares_Vet;

    ler_Vetor(vet);
    soma_Impares_Vet = soma_Impares_Vetor(vet);

    printf("As somas de impares digitados, equivale: %d" , soma_Impares_Vet);

    return 0;
}