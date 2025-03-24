/*
A representação em Farenheit da temperatura igual a 37,777777 graus celsius, sabendo que uma medida
em celsius pode ser convertida em Farenheit através da seguinte fórmula:
Fahrenheit = celsius x 1,8 + 32
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("=== Conversor celsius p/ farenheit ===\n");

    float celsius = 37.7;
    float farenheit = celsius * 1.8 + 32;

    printf("%.2f celsius, equivale a %.2f farenheit" , celsius , farenheit);

    return 0;
}