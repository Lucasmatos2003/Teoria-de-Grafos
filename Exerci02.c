#include <stdio.h>

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
    }
    printf("Maior grau do grafo: %d\n", maiorGrau);
}

int main() {
    int ordem, tamanho;

    printf("Digite o numero de vertices: ");
    scanf("%d", &ordem);

    printf("Digite o numero de arestas: ");
    scanf("%d", &tamanho);

    int grafo[100][100] = {0};

    printf("Digite as arestas {pares de vértices}:\n");
    for(int i = 0; i < tamanho; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        grafo[u][v] = 1;
        grafo[v][u] = 1;
    }

    grafos_resposta(grafo, ordem, tamanho);

    return 0;
}

