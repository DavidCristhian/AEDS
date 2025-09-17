#include<stdio.h>
#include<stdbool.h>

int tamString(char *str){ // Retorna o tamanho da string
    int count = 0;
    while(str[count] != '\0'){ // Percorre até o último caractere
        count++;
    }
    return count;
}

bool flegStop(char *str){ // Valida se a string é a fleg de parada
    return (tamString(str) == 3 && str[0] == 'F' &&
            str[1] == 'I' && str[2] == 'M');
}

bool somenteVogais(char *str){ // Função para verificar se a string tem somente vogais
    int tam = tamString(str);

    for(int i = 0; i < tam; i++){
        if(!(str[i] == 'a' || str[i] == 'A' || // Valida se o caracterer não é vogal
             str[i] == 'e' || str[i] == 'E' ||
             str[i] == 'i' || str[i] == 'I' ||
             str[i] == 'o' || str[i] == 'O' ||
             str[i] == 'u' || str[i] == 'U')) return false; // Retorna false se não for vogal
    }

    return true; // Se não houver parada retorna true
}

bool somenteConsoantes(char *str){ // Função para verificar se a string tem somente consoantes
    int tam = tamString(str);

    for(int i = 0; i < tam; i++){
        if(!(str[i] >= 'a' && str[i] <= 'z' ||
             str[i] >= 'A' && str[i] <= 'Z')) return false; // Valida se é uma letra

        if((str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U')) return false; // Valida se é consoante 
    }

    return true; // Se não houver parada retorna true
}

bool somenteInteiros(char *str){ // Função para verificar se a string tem somente inteiros
    int tam = tamString(str);

    for(int i = 0; i < tam; i++){
        if(!(str[i] >= '1' && str[i] <= '9')) return false; // Valida se é um número
    }

    return true;
}

bool somenteReal(char *str){ // Função para verificar se a string tem somente um número real
    int tam = tamString(str);
    int count = 0;

    for(int i = 0; i < tam; i++){
        if(!((str[i] >= '0' && str[i] <= '9') || (str[i] == '.' || str[i] == ','))) return false; // valida se é número ou '.' , ','

        if(str[i] == '.' || str[i] == ','){ // Contabiliza o separador da parte decimal
            count++;
            if(count > 1) return false; // Valida se é um número real
        }  
    }

    return true;
}

int main(){
    char str[1000];

    while(fgets(str, 1000, stdin) != NULL){ // Para caso seja um arquivo de entrada, pecorre até o fim

        int i = 0;

        while(str[i] != '\0'){ // Retira o \n
            if(str[i] == '\n'){
                str[i] = '\0';
            }
            i++;
        }


        if(flegStop(str)) break; // Verifica se a string é a fleg de parada

        // Variáveis de controle
        bool v = somenteVogais(str);
        bool c = somenteConsoantes(str);
        bool nInt = somenteInteiros(str);
        bool nReal = somenteReal(str);

        // Exibição
        printf("%s %s %s %s\n",
               v ? "SIM" : "NAO",
               c ? "SIM" : "NAO",
               nInt ? "SIM" : "NAO",
               nReal ? "SIM" : "NAO");
    }

    return 0;
}