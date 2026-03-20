package AEDS.AEDS2.algoritmosOdenacao.java;

public class Bolha extends Vetor{
    
    // Construtor
    public Bolha(){
        super();
    }

    // Construtor com parâmetro
    public Bolha(int tam){
        super(tam);
    }

    // Com o conceito de polimorfismo modifica o método sort da classe pai
    @Override
    public void sort(){
        for(int i = (tam - 1); i > 0; i--){
            for(int j = 0; j < i; j++){
                if (array[j] > array[j + 1]) {
                    swap(j, j+1);
				}
            }
        }
    }
}
