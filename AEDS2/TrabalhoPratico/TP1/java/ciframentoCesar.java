package AEDS.AEDS2.TrabalhoPratico.TP1.java;

import java.util.Scanner;

public class ciframentoCesar {
    // Funçao para validar se a string e a flag de abortagem
    public static boolean ehFlag(String str){
        return (str.length() == 3 &&
                str.charAt(0) == 'F' &&
                str.charAt(1) == 'I' &&
                str.charAt(2) == 'M');
    }

    public static String cifrarString(String str){
        String strCifrada = "";

        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) < 127){
                strCifrada += (char) (str.charAt(i) + 3);
            } else{
                strCifrada += (char) (str.charAt(i));
            }
        }

        return strCifrada;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextLine()){
            String str = sc.nextLine();
            if(ehFlag(str)) break;

            System.out.println(cifrarString(str));
        }

        sc.close();
    }
}