import java.util.Scanner;

public class hash {

    public static void bubbleSort(int[] vet, int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (vet[j] > vet[j + 1]) {
                    int tmp = vet[j];
                    vet[j] = vet[j + 1];
                    vet[j + 1] = tmp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {

            int ini = sc.nextInt();
            if (ini != 1) 
                continue;

            int[] pacotes = new int[100000];
            int qtd = 0;

            while (true) {
                String s = sc.next();
                
                if (s.equals("0"))
                    break;

                int num = sc.nextInt();
                pacotes[qtd++] = num;
            }

            bubbleSort(pacotes, qtd);

            for (int i = 0; i < qtd; i++) {
                System.out.printf("Package %03d\n", pacotes[i]);
            }

            System.out.println();
        }
    }
}
