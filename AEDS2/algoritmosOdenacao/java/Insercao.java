package AEDS.AEDS2.algoritmosOdenacao.java;

public class Insercao extends Vetor{
    
    // Construtor
    public Insercao(){
        super();
    }

    // Construtor com parâmetro
    public Insercao(int tam){
        super(tam);
    }

    // Com o conceito de polimorfismo modifica o método sort da classe pai
    @Override
    public void sort(){
        for(int i = 1; i < tam; i++){
            int temp = array[i];
            int j = i - 1;
            while((j >= 0) && (array[j] > temp)){
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = temp;
        }
    }
}
