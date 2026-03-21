# 📂 Algoritmos de Ordenação
Este repositório contém implementações clássicas de algoritmos de ordenação em Java, utilizando conceitos de Herança e Polimorfismo a partir de uma classe base Vetor.

---
## 📌 O que é um Método de Ordenação?
Um método (ou algoritmo) de ordenação é um procedimento lógico passo a passo para colocar os elementos de uma lista ou array em uma ordem

A eficiência de um algoritmo de ordenação é medida pela sua Complexidade de Tempo (quantas operações ele faz conforme o tamanho da lista aumenta) e Complexidade de Espaço (quanta memória extra ele utiliza).

---
## 🛠️ Descrição dos Métodos Implementados

### Bubble Sort (Ordenação por Bolha)
O Bubble Sort percorre o vetor várias vezes. Em cada iteração, ele compara elementos adjacentes e os troca se estiverem na ordem errada. O maior elemento "flutua" para o final do vetor a cada passagem, como uma bolha de ar subindo na água.

Ideal para: Fins didáticos ou vetores quase ordenados.

Característica: Estável (preserva a ordem de elementos iguais).

### Selection Sort (Ordenação por Seleção)
Este algoritmo divide o vetor em duas partes: a parte já ordenada e a parte a ordenar. Ele busca o menor elemento da parte não ordenada e o troca com o elemento da primeira posição não ordenada.

Ideal para: Sistemas onde o custo de escrita (troca) é caro, pois ele faz no máximo n trocas.

Característica: Não estável e de fácil implementação.

### Insertion Sort (Ordenação por Inserção)
Semelhante à maneira como organizamos cartas de baralho na mão. Ele percorre o vetor da esquerda para a direita e, para cada elemento, o "insere" na posição correta entre os elementos que já foram processados à sua esquerda, deslocando os maiores para o lado.

Ideal para: Pequenos conjuntos de dados ou quando novos elementos são adicionados a uma lista já ordenada.

Característica: Muito eficiente para vetores pequenos e quase ordenados.
---

## 📊 Análise de Custo (Notação Big-O)
A tabela abaixo descreve o custo de cada algoritmo considerando o número de comparações e movimentações no limite justo (pior caso e caso médio).

| Algoritmo | Melhor Caso | Médio Caso | Pior Caso (O) | Espaço |
| :--- | :--- | :--- | :--- | :--- |
| **Bubble Sort** | $\Omega(n)$ | $\Theta(n^2)$ | $O(n^2)$ | $O(1)$ |
| **Selection Sort** | $\Omega(n^2)$ | $\Theta(n^2)$ | $O(n^2)$ | $O(1)$ |
| **Insertion Sort** | $\Omega(n)$ | $\Theta(n^2)$ | $O(n^2)$ | $O(1)$ |