/*
Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, em seguida, crie e escreva um segundo vetor com os números do primeiro vetor em ordem
inversa.
Exemplo de execução:
Entrada: 1 2 3 4 5 6 7 8 9 10
Saída:
Vetor invertido: 10 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>
#define tamanho_Vet 10

void ler_Vetor(int vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %d numero: \n" , i + 1);
        scanf("%d" , &vet[i]);
    }
}

void inverter_Vetor(int vet1[] , int vet2[]){
    int k = 0;
    for(int i = tamanho_Vet - 1; i >= 0; i--){
        vet2[i] = vet1[k];
        k++;
    }
}

void imprimir_Vetor(int vet[]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("%d " , vet[i]);
    }
}

int main(){
    printf("=== Invertendo vetor ===\n");
    int vet1[tamanho_Vet] , vet2[tamanho_Vet];

    ler_Vetor(vet1);
    inverter_Vetor(vet1, vet2);
    imprimir_Vetor(vet2);

    return 0;
}