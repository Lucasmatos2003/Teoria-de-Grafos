#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar printf
#define NUM_VERTICES 3 // Define o número de vértices no grafo
#define NUM_ARESTAS 3 // Define o número de arestas no grafo

// Função para descrever o grafo
void grafos_resposta(int grafo[NUM_ARESTAS][NUM_VERTICES]) {
    int ordem = NUM_ARESTAS; // A ordem do grafo (número de arestas)
    int tamanho = NUM_VERTICES; // O tamanho do grafo (número de vértices)

    // Abaixo há um erro de uso das variáveis na função printf, você deve usar "%d" para imprimir inteiros.
    printf("ordem dos grafos: %d\n", ordem); // Imprime a ordem do grafo (número de arestas)
    printf("ordem das arestas: %d\n", tamanho); // Imprime o tamanho do grafo (número de vértices)

    printf("grau de cada vértice:\n");
    // Calcula e imprime o grau de cada vértice
    for (int i = 0; i < NUM_VERTICES; i++) {
        int grau = 0; // Inicializa o grau do vértice i
        for (int j = 0; j < NUM_VERTICES; j++) {
            // Conta quantas vezes o vértice i aparece em arestas
            if (grafo[i][j] == 1) {
                grau++;
            }
        }
        // Imprime o grau do vértice i
        printf("Grau do vértice %d: %d\n", i, grau);
    }
}

int main() {
    // Erro na definição do grafo, a sintaxe correta para declarar uma matriz é com colchetes.
    int grafo[NUM_ARESTAS][NUM_VERTICES] = {0}; // Declara e inicializa a matriz do grafo com 0

    // Erros na atribuição das arestas, isso não altera a matriz adequadamente
    grafo[1][1] = 1; // Define uma aresta entre os vértices 1 e 1
    grafo[1][2] = 1; // Define uma aresta entre os vértices 1 e 2
    grafo[2][0] = 1; // Define uma aresta entre os vértices 2 e 0

    grafos_resposta(grafo); // Chama a função para descrever o grafo

    return 0; // Finaliza o programa
}
