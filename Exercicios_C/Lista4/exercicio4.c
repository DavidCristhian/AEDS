/*
Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna
o n-ésimo termo da sequência 1/3 . 1/5, 1/7, 1/9, 1/11 ... . 
*/

#include<stdio.h>

double um_Sobre_Impar(int n){
    double result;
    int impar = 1;

    for(int i = 0; i < n; i++){
        impar += 2;
    }

    result = 1.0 / impar;
    return result;
}

int main(){
    printf("=== Sequencia ===\n");
    int qt_Termos;
    double result;

    do{
        printf("Digite a quantidade de termos: \n");
        scanf("%d" , &qt_Termos);
    }while(qt_Termos < 1);

    result = um_Sobre_Impar(qt_Termos);

    printf("O %dº termo da sequência é: %.5f\n", qt_Termos, result);


    return 0;
}