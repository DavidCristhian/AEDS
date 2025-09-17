package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class inversaoStringRec{

    public static boolean flegStop(String str){ 
        return(str.length() == 3 && str.charAt(0) == 'F' &&
               str.charAt(1) == 'I' && str.charAt(2) == 'M');
    }

    public static String inversorStringRec(String str, int tam){
        if(tam < 0){
            return "";
        }

        return str.charAt(tam) + inversorStringRec(str, tam - 1);
    }

    public static String inversorString(String str){
        return inversorStringRec(str, str.length() - 1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String linha = sc.nextLine();
        while(!(flegStop(linha))){

            System.out.println(inversorString(linha));

            linha = sc.nextLine();
        }
        sc.close();
    }
}