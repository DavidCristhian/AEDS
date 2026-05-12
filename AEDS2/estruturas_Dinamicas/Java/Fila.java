package Java;

public class Fila {
    private No primeiro;
    private No ultimo;

    // Construtor da classe que cria uma fila sem elementos (somente no cabeca).
    Fila(){
        primeiro = new No();
        ultimo = primeiro;
    }

    // === Metodos ===
    public void inserir(int elemento){ // Inserindo no fim
        ultimo.prox = new No(elemento);
        ultimo = ultimo.prox;
    }

    // Removendo mantendo o No cabeça
    public int remover() throws Exception{
        if(primeiro == ultimo){
            throw new Exception("Error, estrutura vazia");
        }

        No tmp = primeiro.prox;
        int resp = tmp.elemento;
        primeiro.prox = tmp.prox;

        if(primeiro.prox == null){ // Caso haja somente um elemento
            ultimo = primeiro;
        }

        tmp.prox = null;
        tmp = null;

        return resp;
    }

    public void mostrar() throws Exception{
        if(primeiro == ultimo){
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
}
