package Java;

import AEDS.AEDS2.estruturas_Dinamicas.Java.NoDuplo;

public class ListaDupla {
    public NoDuplo primeiro;
    public NoDuplo ultimo;

    // === Construtor ===
    ListaDupla(){
        primeiro = new NoDuplo();
        ultimo = primeiro;
    }

    // === Métodos ===
    // Método de retorno do tamanho da estrutura
    public int tamanho(){
        int resp = 0;
        for(NoDuplo i = primeiro.prox; i != null; i = i.prox) { resp++; }  // Considerando celula cabeça
        return resp;
    }
    
    // Inserir no inicio
    public void inserirInicio(int elemento){
        NoDuplo tmp = new NoDuplo(elemento);

        tmp.prox = primeiro.prox;
        tmp.ant = primeiro;
        primeiro.prox = tmp;

        if(ultimo == primeiro){
            ultimo = tmp;            
        }
        else{
            tmp.prox.ant = tmp;
        }

        tmp = null;
    }

    // Inserir no fim
    public void inserirFim(int elemento){
        ultimo.prox = new NoDuplo(elemento);
        ultimo.prox.ant = ultimo;
        ultimo = ultimo.prox; 
    }

    // Inserir em posiçao
    public void inserir(int elemento, int pos) throws Exception{
        int tamanho = tamanho();
        if(pos < 0 || pos > tamanho){
            throw new Exception("Error, nullpointerexception");
        }
        else if(pos == 0){ inserirInicio(elemento); }
        else if(pos == tamanho){ inserirFim(elemento); }
        else{
            NoDuplo i = primeiro;
            for(int j = 0; j < pos; j++, i = i.prox);
            
            NoDuplo tmp = new NoDuplo(elemento);
            tmp.prox = i.prox;
            tmp.ant = i;
            tmp.prox.ant = tmp;
            i.prox = tmp;

            tmp = i = null;
        }
    }

    // Remover inicio
    public int removerInicio() throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }

        NoDuplo tmp = primeiro.prox;
        int resp = tmp.elemento;
        
        primeiro.prox = tmp.prox;

        if(primeiro.prox != null){
            primeiro.prox.ant = primeiro;
        }
        else{
            ultimo = primeiro;
        }

        tmp.prox = tmp.ant = null;
        tmp = null;

        return resp;
    }

    // Remover fim
    public int removerFim() throws Exception{
        if(ultimo == primeiro){
            throw new Exception("Error, estrutura vazia");
        }

        int resp = ultimo.elemento;

        NoDuplo tmp = ultimo;
        ultimo = tmp.ant;

        ultimo.prox = null;
        tmp.ant = null;
        tmp = null;

        return resp;
    }

    // Remover em posiçao
    public int remover(int pos) throws Exception {
        int tamanho = tamanho();
        int resp;

        // Validação de limites
        if (ultimo == primeiro) {
            throw new Exception("Erro: Estrutura vazia!");
        } else if (pos < 0 || pos >= tamanho) {
            throw new Exception("Erro: Posição inválida!");
        }

        // Casos especiais: extremidades
        if (pos == 0) {
            resp = removerInicio();
        } else if (pos == tamanho - 1) {
            resp = removerFim();
        } else {
            // Remoção no meio da lista
            NoDuplo i = primeiro.prox;
            for (int j = 0; j < pos; j++, i = i.prox);

            // Captura o elemento
            resp = i.elemento;

            // Ajusta os vizinhos para pularem o nó 'i'
            i.ant.prox = i.prox;
            i.prox.ant = i.ant;

            // Limpa referências do nó removido (boa prática)
            i.prox = i.ant = null;
        }

        return resp;
    }

    // Metodo de ordenaçao Inserçao
    public void insercao() {
    // Começamos do segundo elemento (primeiro.prox.prox)
    for (NoDuplo i = primeiro.prox.prox; i != null; i = i.prox) {
        int tmp = i.elemento;
        NoDuplo j = i.ant;

        // Enquanto o valor for menor que os anteriores, "arrasta" o valor para a frente
        // O j != primeiro serve para não ultrapassar a célula cabeça
        while (j != primeiro && j.elemento > tmp) {
            j.prox.elemento = j.elemento;
            j = j.ant;
        }
        j.prox.elemento = tmp;
    }
}
}