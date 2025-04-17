/*
Os alunos de uma turma com numAlunos fizeram numProvas. Leia cada uma das
numProvas feitas por cada um dos numAlunos. Imprima na tela: a média
de cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou
igual a 80%.
*/

#include<stdio.h>

int main(){
    printf("=== Gerenciador de provas ===\n");
    int numAlunos, numProvas;
    float mediaAluno, mediaTurma, percAlunosAcima, valorProva, countAlunoAcima = 0;

    do{
        printf("Digite a quantidade de alunos, e depois a quantidade de provas por cada aluno: \n");
        scanf("%d%d" , &numAlunos, &numProvas);
    }while(numAlunos < 1 || numProvas < 1);

    for(int i = 0; i < numAlunos; i++){
        mediaAluno = 0;

        for(int j = 0; j < numProvas; j++){
            printf("Digite a nota da %d prova: " , j + 1);
            scanf("%f" , &valorProva);
            mediaAluno += valorProva;
        }

        mediaAluno = mediaAluno / numProvas;
        printf("A media do aluno %d, equivale a: %.2f\n" , i + 1, mediaAluno);

        if(mediaAluno >= 80){
            countAlunoAcima ++;
        }

        mediaTurma += mediaAluno;
    }

    mediaTurma = mediaTurma / numAlunos;
    percAlunosAcima = (countAlunoAcima / numAlunos) * 100;
    printf("Media turma: %.2f\n" , mediaTurma);
    printf("Percentual de alunos acima de 80 porcento: %.2f\n" , percAlunosAcima);

    return 0;
}