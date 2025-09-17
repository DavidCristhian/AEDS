#include <stdio.h>
#include <stdbool.h>

bool flegStop(int num){
    return num == 0;
}

int main(){
    int R; // Número de rodadas

    scanf("%d", &R);
    while(!(flegStop(R))){
        int rMI[R];
        int rLI[R];

        // Leitura da pontuação de Mark
        for(int i = 0; i < R; i++){
            scanf("%d", &rMI[i]);
        }

        // Leitura da pontuação de Leti
        for(int i = 0; i < R; i++){
            scanf("%d", &rLI[i]);
        }

        int pontuacaoMark = 0;
        int pontuacaoLeti = 0;

        int countMark = 1; // conta repetições consecutivas
        int countLeti = 1;

        // Processa rodada a rodada
        for(int i = 0; i < R; i++){
            // --- Mark ---
            if(i > 0 && rMI[i] == rMI[i-1]){
                countMark++;
            } else {
                countMark = 1;
            }
            if(countMark == 3){
                pontuacaoMark += 30; // bônus
                countMark = 1; // reinicia
            }
            pontuacaoMark += rMI[i];

            // --- Leti ---
            if(i > 0 && rLI[i] == rLI[i-1]){
                countLeti++;
            } else {
                countLeti = 1;
            }
            if(countLeti == 3){
                pontuacaoLeti += 30; // bônus
                countLeti = 1;
            }
            pontuacaoLeti += rLI[i];
        }

        // Resultado final
        if(pontuacaoMark > pontuacaoLeti){
            printf("M\n");
        } else if(pontuacaoLeti > pontuacaoMark){
            printf("L\n");
        } else {
            printf("T\n");
        }

        // Lê próxima rodada
        scanf("%d", &R);
    }

    return 0;
}