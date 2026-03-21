package AEDS.AEDS2.algoritmosOdenacao.java;

public class Quicksort extends Vetor{
    
    // Construtor
    public Quicksort(){
        super();
    }

    // Construtor com parâmetro
    public Quicksort(int tam){
        super(tam);
    }

    // Método quicksort
    private void quicksort(int esq, int dir){
        int i = esq, j = dir;
        int pivo = array[(dir+esq)/2];
        while (i <= j) {
            while (array[i] < pivo) i++;
            while (array[j] > pivo) j--;
            if (i <= j) {
                swap(i, j);
                i++;
                j--;
            }
        }
        if (esq < j)  quicksort(esq, j);
        if (i < dir)  quicksort(i, dir);
    }

    // Com o conceito de polimorfismo modifica o método sort da classe pai
    @Override
    public void sort(){
        quicksort(0 , tam-1);
    }
}
