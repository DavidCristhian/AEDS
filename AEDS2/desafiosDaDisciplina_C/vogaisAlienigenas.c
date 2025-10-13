#include<stdio.h>

int tamString(char *str){
    int i = 0;
    while(str[i] != "\0") i++;
    return i;
}

int main(){
    char arry1[1000];
    char arry2[1000];

    while(fgets(arry1, 1000, stdin) != NULL){

        int i = 0, j = 0;

        while(arry1[i] != '\0'){
            if(arry1[i] == '\n'){
                arry1 = '\0';
            }
            i++;
        }

        scanf(" [^\n]" , arry2);
        while(arry2[j] != '\0'){
            if(arry2[j] == '\n'){
                arry2 = '\0';
            }
            j++;
        }

        int count = 0;
        int tamStr1 = tamString(arry1);
        int tamStr2 = tamString(arry2);

        for(int i = 0; i < tamStr2; i++){
            for(int j = 0; j < tamStr1; j++){
                if(arry1[j] == arry2[i]){
                    count++;
                }
            }
        }

        printf("%d" , count);

    }

    return 0;
}