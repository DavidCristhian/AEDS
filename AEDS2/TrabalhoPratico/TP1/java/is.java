package AEDS.AEDS2.TrabalhoPratico.TP1.java;

import java.util.Scanner;

public class is {
    // Função para validar se a string é a flag de parada
    public static boolean ehFlag(String str){
        return (str.length() == 3 &&
                str.charAt(0) == 'F' &&
                str.charAt(1) == 'I' &&
                str.charAt(2) == 'M');
    }

    // Valida se a string é composta somente por vogais
    public static boolean isVogais(String str){
        if(str == null || str.length() == 0) return false;

        boolean resp = true;
        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);
            if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || 
                c == 'I' || c == 'i' || c == 'O' || c == 'o' || 
                c == 'U' || c == 'u') {
                    resp = true;
            } else {
                i = str.length(); // Sai do laço
                resp = false;
            }
        }

        return resp;
    }

    // Valida se a string é composta somente por consoantes
    public static boolean isConsoantes(String str){
        if(str == null || str.length() == 0) return false;

        boolean resp = true;
        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);

            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){ // Validando se é letra
                // Se for letra, não pode ser vogal
                if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || 
                    c == 'I' || c == 'i' || c == 'O' || c == 'o' || 
                    c == 'U' || c == 'u') {
                    i = str.length(); // Sai do loop
                    resp = false;
                }
            } else{
                i = str.length(); // Sai do loop
                resp = false;
            }
        }

        return resp;
    }

    // Valida se a string é um número inteiro
    public static boolean isInteiro(String str){
        if(str == null || str.length() == 0) return false;
        
        boolean resp = true;
        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);

            if(c <= '0' && c >= '9'){
                i = str.length();
                resp = false;
            }
        }

        return resp;
    }

    // Valida se a string é um número real
    public static boolean isReal(String str){
        if(str == null || str.length() == 0) return false;

        boolean resp = true;
        int count = 0;
        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);

            if((c <= '0') || (c >= '9') && (c != '.') && (c != ',')){
                i = str.length();
                resp = false;
            }
            else{
                if(c == '.' || c == ','){
                    count++;
                }
                if(count > 1){
                    i = str.length();
                    resp = false;
                }
            }
        }

        if(count == 0) resp = false;
        return resp;
    }

    public static void main(){
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        while(!ehFlag(str)){
            System.out.print(isVogais(str) ? "SIM" : "NAO");
            System.out.print(isConsoantes(str) ? "SIM" : "NAO");
            System.out.print(isInteiro(str) ? "SIM" : "NAO");
            System.out.print(isReal(str) ? "SIM" : "NAO");
        
            str = sc.nextLine();
        }

        sc.close();
    }
}
