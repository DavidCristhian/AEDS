package AEDS.AEDS2.estruturas_Abstratas_TAD.fila;

class No {
    int dado;
    No prox;
    No(int d) { dado = d; prox = null; }
}

public class filaCabeca {
    No cabeca;
    No fim;

    filaCabeca() {
        cabeca = new No(0); // nó cabeça
        fim = cabeca;
    }

    void enfileirar(int valor) {
        No novo = new No(valor);
        fim.prox = novo;
        fim = novo;
    }

    int desenfileirar() {
        if (cabeca.prox == null) {
            System.out.println("Fila vazia!");
            return -1;
        }
        No removido = cabeca.prox;
        cabeca.prox = removido.prox;
        if (cabeca.prox == null) fim = cabeca;
        return removido.dado;
    }

    void mostrar() {
        No aux = cabeca.prox;
        System.out.print("Frente -> ");
        while (aux != null) {
            System.out.print(aux.dado + " ");
            aux = aux.prox;
        }
        System.out.println("<- Fim");
    }

    public static void main(String[] args) {
        filaCabeca f = new filaCabeca();
        f.enfileirar(10);
        f.enfileirar(20);
        f.enfileirar(30);
        f.mostrar();
        f.desenfileirar();
        f.mostrar();
    }
}


    
