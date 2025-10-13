package AEDS.AEDS2.estruturas_Abstratas_TAD.lista;

class No {
    int valor; // Armazena o valor contido no nó (neste caso, um número inteiro)
    No proximo; // Uma referência (ponteiro) para o próximo nó na sequência

    // Construtor da classe No, chamado ao criar um novo nó
    No(int valor) {
        this.valor = valor; // Atribui o valor passado como parâmetro
        this.proximo = null; // O próximo nó é inicializado como nulo, indicando o fim da cadeia por enquanto
    }
}


class Lista {
    private No inicio; // A referência para o primeiro nó da lista (a "cabeça")

    // Construtor da classe Lista
    public Lista() {
        inicio = null; // Inicializa a lista como vazia
    }

    // Método para inserir um novo nó no final da lista
    public void inserir(int valor) {
        No novo = new No(valor); // Cria um novo nó com o valor especificado

        // Se a lista estiver vazia (inicio é nulo)
        if (inicio == null) {
            inicio = novo; // O novo nó se torna o primeiro elemento
        } else {
            // Caso contrário, a lista já tem elementos
            No atual = inicio; // Cria uma referência temporária para percorrer a lista

            // Percorre a lista até encontrar o último nó (cujo 'proximo' é nulo)
            while (atual.proximo != null) {
                atual = atual.proximo;
            }
            // O 'proximo' do último nó agora aponta para o novo nó, inserindo-o no final
            atual.proximo = novo;
        }
    }

    // Método para remover o nó do início da lista
    public void remover() {
        // Se a lista estiver vazia, imprime uma mensagem e retorna
        if (inicio == null) {
            System.out.println("Lista vazia!");
            return;
        }
        // O ponteiro 'inicio' avança para o próximo nó.
        // O garbage collector do Java cuidará do nó anterior, que não tem mais referências.
        inicio = inicio.proximo;
    }

    // Método para exibir todos os elementos da lista
    public void exibir() {
        No atual = inicio; // Cria uma referência temporária para percorrer a lista
        System.out.print("Lista: ");

        // Percorre a lista do início ao fim
        while (atual != null) {
            System.out.print(atual.valor + " ");
            atual = atual.proximo; // Avança para o próximo nó
        }
        System.out.println(); // Pula uma linha no final da exibição
    }
}

public class linked_List_JAVA {
    // Método principal, ponto de entrada do programa
    public static void main(String[] args) {
        // Cria uma nova instância da classe Lista
        Lista lista = new Lista();

        // Insere alguns valores na lista
        lista.inserir(10);
        lista.inserir(20);
        lista.inserir(30);

        // Exibe a lista atual: "Lista: 10 20 30 "
        lista.exibir();

        // Remove o primeiro elemento da lista (o nó com valor 10)
        lista.remover();

        // Exibe a lista após a remoção: "Lista: 20 30 "
        lista.exibir();
    }
}
