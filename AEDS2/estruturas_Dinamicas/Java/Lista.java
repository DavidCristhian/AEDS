package Java;

public class Lista{
    private No primeiro;
    private No ultimo;

    // === Construtor ===
    Lista(){
        primeiro = new No();
        ultimo = primeiro;
    }

    // === Métodos ===
    // Método de retorno do tamanho da estrutura
    public int tamanhoLista(){
        int resp = 0;
        for(No i = primeiro.prox; i != null; i = i.prox) { resp++; } // Considerando celula cabeça
        return resp;
    }

    // Inserindo no fim
    public void inserirFim(int elemento){
        ultimo.prox = new No(elemento);
        ultimo = ultimo.prox;
    }

    // Inserindo no início
    public void inserirInicio(int elemento){
        No tmp = new No(elemento);
        tmp.prox = primeiro.prox;
        primeiro.prox = tmp;

        if(ultimo == primeiro){
            ultimo = primeiro.prox;
        }
        
        tmp = null;
    }

    // Inserindo a partir de uma posição
    public void inserir(int pos, int elemento) throws Exception{
        int tamanho = tamanhoLista();

        if(pos > tamanho || pos < 0){
            throw new Exception("Erro ao inserir posicao (" + pos + " / tamanho = " + tamanho + ") invalida!");
        } 
        else if(pos == 0){ inserirInicio(elemento); }
        else if(pos == tamanho) { inserirFim(elemento); }
        else{
            No i = primeiro;
            for(int j = 0; j < pos; j++ , i = i.prox);
            
            No tmp = new No(elemento);
            tmp.prox = i.prox;
            i.prox = tmp; 

            tmp = i = null;
        }
    }

    // Remover no fim
    public int removerFim() throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }

        No i = primeiro;
        while(i.prox != ultimo) { i = i.prox; }
        
        int resp = ultimo.elemento;
        ultimo = i;
        i = ultimo.prox = null;

        return resp;
    }

    // Remover no inicio, mantendo No cabeça vazio
    public int removerInicio() throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }

        No tmp = primeiro.prox;
        int resp = tmp.elemento;
        primeiro.prox = tmp.prox;

        if(primeiro.prox == null){ ultimo = primeiro; }

        tmp.prox = null;
        tmp = null;

        return resp;
    }

    // Remover na posiçao
    public int remover(int pos) throws Exception{
        int tamanho = tamanhoLista();
        int resp = 0;
        if((ultimo == primeiro)){
            throw new Exception("Error, estrutura vazia");
        }
        else if(pos < 0 || pos > tamanho) {
            throw new Exception("Erro ao remover (posicao " + pos + " / " + tamanho + " invalida!"); 
        }
        else if(pos == 0){ removerInicio(); }
        else if(pos == tamanho - 1) { removerFim(); }
        else{
            No i = primeiro;
            for(int j = 0; j < pos; j++, i = i.prox);

            No tmp = i.prox;
            resp = tmp.elemento;

            i.prox = tmp.prox;
            tmp.prox = null;
            i = tmp = null;
        }

        return resp;
    }

    // Método para impressão da estrutura
    public void mostrar() throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }
        else{
            System.out.print("[ ");
            for(No i = primeiro.prox; i != null; i = i.prox){
                System.out.print(i.elemento + " ");
            }
            System.out.print("]");
        }
    }

    // Método de pesquisa
    public boolean pesquisar(int elemento) throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }

        boolean resp = false;
        for(No i = primeiro.prox; i != null; i = i.prox){
            if(elemento == i.elemento){
                resp = true;
                i = null;
            }
        }
        return resp;
    }
}