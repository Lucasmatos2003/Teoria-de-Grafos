#include <stdio.h>
#include <stdlib.h>

// Definindo o número de vértices e arestas
#define VERTICES 3
#define ARESTAS 3

// Função para calcular o grau de um vértice
int calcularGrau(int grafo[VERTICES][VERTICES], int vertice) {
    int grau = 0;
    for (int i = 0; i < VERTICES; i++) {
        grau += grafo[vertice][i];
    }
    return grau;
}

int main() {
    // Criando a matriz de adjacência e inicializando com 0
    int grafo[VERTICES][VERTICES] = {0};

    // Adicionando as arestas
    grafo[0][1] = 1; // Aresta entre o vértice 0 e o vértice 1
    grafo[1][0] = 1; // Aresta entre o vértice 1 e o vértice 0
    grafo[1][2] = 1; // Aresta entre o vértice 1 e o vértice 2
    grafo[2][1] = 1; // Aresta entre o vértice 2 e o vértice 1
    grafo[0][2] = 1; // Aresta entre o vértice 0 e o vértice 2
    grafo[2][0] = 1; // Aresta entre o vértice 2 e o vértice 0

    // Exibindo a ordem do grafo (número de vértices)
    printf("Ordem do grafo: %d\n", VERTICES);

    // Exibindo o tamanho do grafo (número de arestas)
    printf("Tamanho do grafo: %d\n", ARESTAS);

    // Variáveis para armazenar o grau máximo, médio e mínimo
    int grauMaximo = 0;
    int grauMinimo = VERTICES;  // Inicializa com um valor maior para facilitar a comparação
    int somaGraus = 0;

    // Calculando o grau de cada vértice e identificando os valores máximo, médio e mínimo
    for (int i = 0; i < VERTICES; i++) {
        int grau = calcularGrau(grafo, i);
        printf("Grau do vertice %d: %d\n", i, grau);

        // Atualizando grau máximo e mínimo
        if (grau > grauMaximo) {
            grauMaximo = grau;
        }
        if (grau < grauMinimo) {
            grauMinimo = grau;
        }

        // Acumulando a soma dos graus para calcular a média
        somaGraus += grau;
    }

    // Calculando o grau médio
    float grauMedio = (float)somaGraus / VERTICES;

    // Exibindo grau máximo, médio e mínimo
    printf("Grau maximo: %d\n", grauMaximo);
    printf("Grau minimo: %d\n", grauMinimo);
    printf("Grau medio: %.2f\n", grauMedio);

    return 0;
}


