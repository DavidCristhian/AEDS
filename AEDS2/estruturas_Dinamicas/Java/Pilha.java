package Java;

public class Pilha {
    private No topo;

    // === Construtor ===
    Pilha(){
        topo = null;
    }

    // === Métodos ===
    public void inserir(int elemento){
        No tmp = new No(elemento); // Criando um No temporario
        tmp.prox = topo;
        topo = tmp;
        tmp = null;
    }

    public int remover() throws Exception{
        if(topo == null){
            throw new Exception("Error, estrutura vazia");
        }

        int resp = topo.elemento;
        No tmp = topo;
        topo = tmp.prox;

        tmp.prox = null;
        tmp = null;

        return resp;
    }

    public void mostrar(){

        System.out.print("[ ");
        for(No i = topo; i != null; i = i.prox){
            System.out.print(i.elemento + " ");
        }
        System.out.print("]");
    }

    // Soma iterativo
    public int soma(){
        int resp = 0;

        for(No i = topo; i != null; i = i.prox){
            resp += i.elemento;
        }

        return resp;
    }

    // Soma recursiva
    public int getSoma(){
        return getSoma(topo, 0);
    }

    public int getSoma(No i, int resp){
        if(i == null){
            return resp;
        }
        else{
            return getSoma(i.prox, resp + i.elemento);
        }
    }

    // Metodo de retorno do max elemento iterativo
    public int maxNum() throws Exception{
        if(topo == null){
            throw new Exception("Error, estrutura vazia");
        }

        int resp = topo.elemento;
        for(No i = topo.prox; i != null; i = i.prox){
            if(i.elemento > resp) { resp = i.elemento; }
        }

        return resp;
    }

    // Metodo de retorno do max elemento recursivo
    public int getMax() throws Exception{
        if(topo == null){
            throw new Exception("Error, estrutura vazia");
        }

        return getMax(topo.prox, topo.elemento);
    }

    public int getMax(No i, int elemento){
        if(i == null){
            return elemento;
        }
        else{
            return (i.elemento > elemento) ? getMax(i.prox, i.elemento) : getMax(i.prox, elemento);
        }
    }
}
