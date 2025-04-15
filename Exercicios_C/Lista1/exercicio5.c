/*
Ler os coeficientes de uma equação do 2º grau, determinar e escrever suas raízes reais ou
imaginárias.
*/

/*
================================
=           Formulas           =
--------------------------------
= pow(ax , 2) + bx + c = 0;    =
--------------------------------
= Delta = pow(b , 2) - 4.ac    = 
--------------------------------
= Condição: a != 0             =
=x1 = -b + sqrt(delta) / 2 . a =
=x2 = -b - sqrt(delta) / 2 . a =
================================
*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("=== Resolvendo equacao 2- grau ===\n");
    float a, b, c, delta, x1, x2, part_Real, part_Img;

    printf("Digite os coeficientes a, b, c: \n");
    scanf("%f%f%f" , &a, &b, &c);
    
    if(a == 0){
        printf("Impossivel efetuar o calculo, pois a = 0\n");
    } else{
        delta = pow(b, 2) - 4*a*c;
        if(delta > 0){
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("As raizes sao distintas, sendo elas x1 = %.21f e x2 = %.21f\n" , x1, x2);
        } else if(delta == 0){
            x1 = -b / (2 * a);
            printf("As raizes sao iguais, sendo elas equivalente a: %.21f\n" , x1);
        } else{
            part_Real = -b / (2 * a);
            part_Img = sqrt(- delta) / (2 * a);
            printf("As raizes sao complexas, sendo x1 = %.21f + %.21f e x2 = %.21f + %.21f" , part_Real, part_Img , part_Real, part_Img);
        }
    }
    return 0;
}