/*
Construa uma função que receba a idade de uma pessoa e gere o número de dias por ela vividos até o
seu último aniversário (fique à vontade para ignorar o impacto dos anos bissextos).
Teste a função criada a partir da função principal.
*/

#include<stdio.h>

int calc_Dias_Vividos(int idade, int mes, int dias){
    int dias_Vividos;

    dias_Vividos = (idade * 365) + (mes * 30) + dias;


    return dias_Vividos;
}

int main(){
    printf("=== Dias Vividos ===\n");
    int idade, mes, dias;

    do{
        printf("Digite a idade, o mes de nascimento, e o dia: ");
        scanf("%d%d%d" , &idade, &mes, &dias);
    }while(idade < 0 || mes < 1 || dias < 1 || mes > 12 || dias > 31);

    printf("Total de dias vividos: %d\n", calc_Dias_Vividos(idade, mes, dias));
    
    return 0;
}