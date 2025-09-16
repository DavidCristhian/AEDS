/*
Crie dois vetores para armazenar 5 números inteiros cada. Solicite que o usuário insira os
valores para os dois vetores. Depois, crie e escreva um terceiro vetor onde cada elemento
seja a soma dos elementos correspondentes dos dois vetores lidos.
Exemplo de execução:
Entrada:
Vetor 1: 1 2 3 4 5
Vetor 2: 5 4 3 2 1
Saída:
Vetor soma: 6 6 6 6 6
*/

#include<stdio.h>
#define tamanho_Vet 5

void ler_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d" , &vet[i]);
    }
}

void soma_Vetores(int vet[tamanho_Vet], int vet2[tamanho_Vet], int vet3[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        vet3[i] = vet[i] + vet2[i];
    }
}

void imprimir_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("%d " , vet[i]);
    }
}

int main(){
    printf("=== Soma / Vetores ===\n");
    int vet1[tamanho_Vet], vet2[tamanho_Vet], vet3[tamanho_Vet];

    ler_Vetor(vet1);
    ler_Vetor(vet2);
    soma_Vetores(vet1, vet2, vet3);
    imprimir_Vetor(vet3);

    return 0;
}