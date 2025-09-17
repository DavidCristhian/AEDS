package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class experimento {

    public static boolean caseRato(String str){
        int tam = str.length() - 1;
        return str.charAt(tam) == 'R';
    }

    public static boolean caseSapo(String str){
        int tam = str.length() - 1;
        return str.charAt(tam) == 'S';
    }
    
    public static boolean caseCoelho(String str){
        int tam = str.length() - 1;
        return str.charAt(tam) == 'C';
    }

    public static int stringParaNumero(String str){
        int num = 0;

        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) >= '0' && str.charAt(i) <= '9'){
                num = num * 10 + (str.charAt(i) - '0');
            } else {
                break; // parou ao encontrar a letra
            }
        }

        return num;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        sc.nextLine(); // consumir quebra de linha

        int totalCobais = 0, countCoelhos = 0, countSapos = 0, countRatos = 0;

        for(int i = 0; i < N; i++){
            String linha = sc.nextLine();

            if(caseRato(linha)){
                countRatos += stringParaNumero(linha);
            }
            else if(caseSapo(linha)){
                countSapos += stringParaNumero(linha);
            }
            else if(caseCoelho(linha)){
                countCoelhos += stringParaNumero(linha);
            }
            totalCobais += stringParaNumero(linha);
        }

        float percRatos = (countRatos * 100.0f) / totalCobais;
        float percSapos = (countSapos * 100.0f) / totalCobais;
        float percCoelhos = (countCoelhos * 100.0f) / totalCobais;

        System.out.println("Total: " + totalCobais + " cobaias");
        System.out.println("Total de coelhos: " + countCoelhos);
        System.out.println("Total de ratos: " + countRatos);
        System.out.println("Total de sapos: " + countSapos);
        System.out.printf("Percentual de coelhos: %.2f %%\n", percCoelhos);
        System.out.printf("Percentual de ratos: %.2f %%\n", percRatos);
        System.out.printf("Percentual de sapos: %.2f %%\n", percSapos);

        sc.close();
    }
}