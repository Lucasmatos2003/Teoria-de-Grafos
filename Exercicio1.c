#include <stdio.h>

#define NUM_ARESTAS 3
#define NUM_VERTICES 3

// Função para descrever o grafo
void grafos_resposta(int grafo[NUM_ARESTAS][NUM_VERTICES]){
    int ordem = NUM_VERTICES;
    int tamanho = NUM_ARESTAS;

    printf("Ordem dos vértices: %d\n", ordem);
    printf("Ordem das arestas: %d\n", tamanho);

    printf("Grau de cada vértice:\n");
    int graus[NUM_VERTICES] = {0};
    for(int i = 0; i < NUM_VERTICES; i++){
        int grau = 0;
        for(int j = 0; j < NUM_VERTICES; j++){
            if (grafo[i][j] == 1 || grafo[j][i] == 1){
                grau++;
            }
        }
        graus[i] = grau;
        printf("Vértice %d: %d\n", i, grau);
    }

    int grau_maximo = graus[0], grau_minimo = graus[0], soma_graus = 0;
    for(int i = 0; i < NUM_VERTICES; i++){
        if (graus[i] > grau_maximo) grau_maximo = graus[i];
        if (graus[i] < grau_minimo) grau_minimo = graus[i];
        soma_graus += graus[i];
    }
    float grau_medio = (float)soma_graus / NUM_VERTICES;

    printf("Escolha uma opção:\n");
    printf("1. Grau Médio\n");
    printf("2. Grau Máximo\n");
    printf("3. Grau Mínimo\n");
    int opcao;
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Grau Médio do grafo: %.2f\n", grau_medio);
            break;
        case 2:
            printf("Grau Máximo do grafo: %d\n", grau_maximo);
            break;
        case 3:
            printf("Grau Mínimo do grafo: %d\n", grau_minimo);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main(){
    int grafo[NUM_ARESTAS][NUM_VERTICES] = {0};

    // Ajuste para inicializar corretamente o grafo
    grafo[0][1] = 1;
    grafo[1][2] = 1;
    grafo[2][0] = 1;

    grafos_resposta(grafo);

    return 0;
}

