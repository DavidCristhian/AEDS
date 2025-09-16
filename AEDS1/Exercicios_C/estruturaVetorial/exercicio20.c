/*
Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.
*/

#include<stdio.h>
#define tam_Vet 5

void lerVetor(int *vet){
    for (int i = 0; i < tam_Vet; i++)
    {
        printf("Digite o %d elemento: \n" , i + 1);
        scanf("%d" , &vet[i]);
    }
}

void imprimirVetor(int *vet){
    int *p = vet;
    int *fim = vet + tam_Vet;
    
    while (p < fim)
    {
        printf("%d" , *p);
        p++;
    }
    
    printf("\n");
}

int main() {
    int vetor[tam_Vet];

    lerVetor(vetor);
    printf("Elementos do vetor:\n");
    imprimirVetor(vetor);

    return 0;
}