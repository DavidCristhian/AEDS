package AEDS.AEDS2.estruturas_Abstratas_TAD.pilha;

class No{
    int dado;
    No prox;

    No(int dado){
        this.dado = dado;
        this.prox = null;
    }
}

public class Pilha{
    private No topo;

    public Pilha() {
        this.topo = null;
    }

    // Verifica se a pilha está vazia
    public boolean estaVazia(){
        return topo == null;
    }

    // Insere um novo elemento na pilha
    public void push(int valor){
        No novo = new No(valor);

        novo.prox = topo;
        topo = novo;
        System.out.println("Elemento " + valor + " inserido");
    }

    // Remove um item
    public int pop(){
        if(estaVazia()){
            System.out.println("Erro: Pilha vazia");
            return -1;
        }

        int valor = topo.dado;
        topo = topo.prox;
        System.out.println("Elemento " + valor + " removido da pilha");


        return valor;
    }

    // Retorna o valor que está no topo
    public int topo(){
        int valor = topo.dado;

        return valor;
    }

    // Imprime a pilha
    public void imprimirPilha(){
        if(estaVazia()){
            System.out.println("Pilha vazia");
            return;
        }

        System.out.println("Elementos da pilha (do topo para a base):");
        No atual = topo;

        while(topo.prox != null){
            System.out.println("Valor " + atual.dado);
            atual = topo.prox;
        }
    }

    // Métodos Iterativos
    public int somaPilha() throws Exception{
        if(topo == null){
            throw new Exception("Erro");
        }
        int soma = 0;
        No atual = topo;

        while(atual != null){
            soma = atual.dado;
            atual = atual.prox;
        }
        return soma;
    }

    public int maiorElementoPilha(){
        if(topo == null) { return 0; } 

        int maior = topo.dado;
        No aux = topo.prox;
        
        while(aux != null){
            if(aux.dado > maior) { maior = aux.dado; }
            aux = aux.prox;
        }
        
        return maior;
    }

    // Métodos Recursivos
    public int somaPilhaRecAuxiliar(No aux){
        if(aux == null) return 0;

        return aux.dado += somaPilhaRecAuxiliar(aux.prox); 
    }

    public int somaPilhaRec(){
        return somaPilhaRecAuxiliar(topo);
    }

    public int maiorElementoPilhaRecAuxiliar(No aux, int maior){
        if (aux == null) { return maior; }
        if(aux.dado > maior) { maior = aux.dado; }
        return maiorElementoPilhaRecAuxiliar(aux.prox, maior);
    }
    
    public int maiorElementoPilhaRec(){
        if(topo == null) { return 0; }
        int maior = topo.dado;
        return maiorElementoPilhaRecAuxiliar(topo, maior);
    }

    public static void main(String[] args) {
        Pilha pilha = new Pilha();

        pilha.push(10);
        pilha.push(20);
        pilha.push(30);

        pilha.imprimirPilha();

        pilha.pop();

        System.out.println("Removido um elemento da pilha");
        pilha.imprimirPilha();

    }
}