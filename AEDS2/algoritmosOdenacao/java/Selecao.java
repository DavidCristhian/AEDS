package AEDS.AEDS2.algoritmosOdenacao.java;

public class Selecao extends Vetor{

    // Contrutor
    public Selecao(){
        super();
    }

    // Contrutor com parâmetro
    public Selecao(int tam){
        super(tam);
    }

    // Com o conceito de polimorfismo modifica o método sort da classe pai
    @Override
    public void sort(){
        for(int i = 0; i < (tam - 1); i++){
            int menor = i;
            for(int j = (i + 1); j < tam; j++){
                if(array[menor] > array[j]){
                    menor = j;
                }
            }
            swap(menor, i);
        }
    }
}