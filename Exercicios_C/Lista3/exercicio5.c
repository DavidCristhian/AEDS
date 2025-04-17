/*
Uma empresa deseja aprimorar sua política de salários. Para isso, deseja saber:
(a) o percentual de funcionários com salário igual ao salário mínimo;
(b) a amplitude salarial (diferença entre o maior e o menor salário da empresa).
O valor do salário mínimo também deverá ser um valor lido. Considere que a empresa
tenha n funcionários, sendo n também um valor lido. Rejeitar a leitura de valores inváli-
dos.

Ler um conjunto de salários e conceder reajustes de acordo com os seguintes critérios:
- Salários inferiores a mil reais, acréscimo de dez por cento.
- Salários entre mil e dois mil reais, acréscimo de oito por cento.
- Salários acima de dois mil reais, acréscimo de sete por cento.
*/

#include<stdio.h>

int main(){
    printf("=== Gerenciamento / Funcionarios ===\n");
    int num_Funcionarios, cont_Salario_Minimo = 0;
    float salario_Minimo, salario_Funcionario, amplitude_Salarial, maior_Salario, menor_Salario, percentual_Salario_Minimo;

    do{
        printf("Digite o numero de funcionarios: \n");
        scanf("%d" , & num_Funcionarios);
    }while(num_Funcionarios < 1);

    do{
        printf("Digite o valor do salario minimo: \n");
        scanf("%f" , &salario_Minimo);
    }while(salario_Minimo < 0);

    for(int i = 0; i < num_Funcionarios; i++){
        printf("Digite o valor do salario do %d funcionario: \n" , i + 1);
        scanf("%f" , &salario_Funcionario);

        if(i == 0){
            maior_Salario = menor_Salario = salario_Funcionario;
        }

        if(salario_Funcionario == salario_Minimo){
            cont_Salario_Minimo++;
        }

        if(salario_Funcionario > maior_Salario){
            maior_Salario = salario_Funcionario;
        }
        if(salario_Funcionario < menor_Salario){
            menor_Salario = salario_Funcionario;
        }

        if(salario_Funcionario < 1000){
            salario_Funcionario += (salario_Funcionario / 100) * 10;
            printf("Salario com reajuste: %.2f" , salario_Funcionario);
        }
        else if(salario_Funcionario >= 1000 && salario_Funcionario < 2000){
            salario_Funcionario += (salario_Funcionario / 100) * 8;
            printf("Salario com reajuste: %.2f" , salario_Funcionario);
        }
        else{
            salario_Funcionario += (salario_Funcionario / 100) * 7;
            printf("Salario com reajuste: %.2f" , salario_Funcionario);
        }

    }

    amplitude_Salarial = maior_Salario - menor_Salario;
    percentual_Salario_Minimo = (cont_Salario_Minimo * 100) / num_Funcionarios;
    
    printf("\nMenor salario: %.2f" , menor_Salario);
    printf("\nMaior salario: %.2f" , maior_Salario);
    printf("\nAmplitude salarial: %.2f" , amplitude_Salarial);
    printf("\nPercentual de funcionarios com salario minimo: %.2f" , percentual_Salario_Minimo);
    
    return 0;
}