#include <stdio.h>
#include <limits.h>  // Para usar o valor INT_MAX

// Função para descrever o grafo
void grafos_resposta(int grafo[100][100], int ordem, int tamanho) {

    printf("Ordem do grafo: %d\n", ordem);
    printf("Tamanho do grafo: %d\n", tamanho);

    printf("Grau de cada vértice:\n");
    for(int i = 0; i < ordem; i++) {
        int grau = 0;
        for(int j = 0; j < ordem; j++) {
            if (grafo[i][j] == 1) {
                grau++;
            }
        }
        printf("Vértice %d: %d\n", i, grau);
    }

    int maiorGrau = 0;
    int menorGrau = INT_MAX;  // Inicia com o maior valor possível

    for(int i = 0; i < ordem; i++) {
        int grau = 0;
        for(int j = 0; j < ordem; j++) {
            if (grafo[i][j] == 1) {
                grau++;
            }
        }
        if (grau > maiorGrau) {
            maiorGrau = grau;
        }
        if (grau < menorGrau) {
            menorGrau = grau;
        }
    }
    printf("Maior grau do grafo: %d\n", maiorGrau);
    printf("Menor grau do grafo: %d\n", menorGrau);
}

int main() {
    int ordem = 5;   // Número de vértices
    int tamanho = 5; // Número de arestas

    int grafo[100][100] = {0};

    // Exemplo de arestas
    int arestas[5][2] = {
        {0, 1},
        {0, 2},
        {1, 2},
        {1, 3},
        {3, 4}
    };

    // Adiciona as arestas ao grafo
    for(int i = 0; i < tamanho; i++) {
        int u = arestas[i][0];
        int v = arestas[i][1];
        grafo[u][v] = 1;
        grafo[v][u] = 1;  // Se o grafo for não-direcionado
    }

    // Chama a função para descrever o grafo
    grafos_resposta(grafo, ordem, tamanho);

    return 0;
}

