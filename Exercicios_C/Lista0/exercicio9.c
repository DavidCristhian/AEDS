/*
Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram
desde o início do dia.
*/

#include <stdio.h>

int main(){
    printf("=== Calc a quantidade de minutos passados ===\n");

    int horas, minutos , result_Minutos;

    printf("Digite a hora, e depois os minutos: ");
    scanf("%d%d" , &horas, &minutos);

    result_Minutos = (horas * 60) + minutos;

    printf("Ja se passaram: %d minutos" , result_Minutos);

    return 0;
}