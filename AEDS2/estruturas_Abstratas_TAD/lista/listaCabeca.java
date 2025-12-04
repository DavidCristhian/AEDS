package AEDS.AEDS2.estruturas_Abstratas_TAD.lista;

class No {
    int dado;
    No prox;
    No(int d) { dado = d; prox = null; }
}

public class listaCabeca {
     No cabeca;

    listaCabeca() {
        cabeca = new No(0); // nó cabeça
    }

    void inserirInicio(int valor) {
        No novo = new No(valor);
        novo.prox = cabeca.prox;
        cabeca.prox = novo;
    }

    void remover(int valor) {
        No ant = cabeca;
        No atual = cabeca.prox;

        while (atual != null && atual.dado != valor) {
            ant = atual;
            atual = atual.prox;
        }

        if (atual != null) {
            ant.prox = atual.prox;
        }
    }

    void mostrar() {
        No aux = cabeca.prox;
        System.out.print("Lista: ");
        while (aux != null) {
            System.out.print(aux.dado + " ");
            aux = aux.prox;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        listaCabeca l = new listaCabeca();
        l.inserirInicio(10);
        l.inserirInicio(20);
        l.inserirInicio(30);
        l.mostrar();
        l.remover(20);
        l.mostrar();
    }
}