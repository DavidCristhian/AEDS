/*
Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, após a leitura, escreva cada elemento do vetor e a sua respectiva posição no formato:
"Elemento [valor] na posição [índice]".
Exemplo de execução:
Entrada: 5 8 3 6 9 2 1 7 4 0
Saída:
Elemento 5 na posição 0
Elemento 8 na posição 1
Elemento 3 na posição 2
...
Elemento 0 na posição 9
*/

#include<stdio.h>

#define tamanho_Vet 10

void ler_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d" , &vet[i]);
    }
}

void imprimir_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Elemento %d na posicao %d" , vet[i] , i);
    }
}

int main(){
    printf("=== Vetor ===\n");
    int vet[tamanho_Vet];

    ler_Vetor(vet);
    imprimir_Vetor(vet);

    return 0;
}