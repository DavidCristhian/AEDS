package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class inversaoString {
    public static boolean flegStop(String str){ 
        return(str.length() == 3 && str.charAt(0) == 'F' &&
               str.charAt(1) == 'I' && str.charAt(2) == 'M');
    }

    public static String inversorString(String str){
        String strInvertida = "";

        for(int i = str.length() - 1; i >= 0; i--){
            char c = str.charAt(i);
            strInvertida += c;
        }

        return strInvertida;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String linha = sc.nextLine();
        while (!(flegStop(linha))) {
            
            System.out.println(inversorString(linha));

            linha = sc.nextLine();
        }
        sc.close();
    }
}
