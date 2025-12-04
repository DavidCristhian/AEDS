package AEDS.AEDS2.estruturas_Abstratas_TAD.pilha;

class No {
    int dado;
    No prox;
    No(int d) { dado = d; prox = null; }
}

public class pilhaCabeca {
    No cabeca; // nó cabeça

    pilhaCabeca() {
        cabeca = new No(0);
    }

    void push(int valor) {
        No novo = new No(valor);
        novo.prox = cabeca.prox;
        cabeca.prox = novo;
    }

    int pop() {
        if (cabeca.prox == null) {
            System.out.println("Pilha vazia!");
            return -1;
        }
        No removido = cabeca.prox;
        cabeca.prox = removido.prox;
        return removido.dado;
    }

    void mostrar() {
        No aux = cabeca.prox;
        System.out.print("Topo -> ");
        while (aux != null) {
            System.out.print(aux.dado + " ");
            aux = aux.prox;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        pilhaCabeca p = new pilhaCabeca();
        p.push(10);
        p.push(20);
        p.push(30);
        p.mostrar();
        p.pop();
        p.mostrar();
    }
}