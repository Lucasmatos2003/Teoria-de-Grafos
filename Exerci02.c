#include <stdio.h>

//função para descrever o grafo
void grafos_resposta(int grafo[100], int ordem, int tamanho){

    print("ordem dos grafos: %d\n", ordem);
    print("tamaho dos grafos: %d\n", tamanho);

    printf("grau de cada vértice:\n");
    for(int i=0; i<ordem; i++){
      int grau = 0;
      for(int j=0; j<ordem; j++){
          if (grafo[i][j] == 1 || grafo[j][i] == 1){
              grau++;
          }
      }
      print("vertices: %d %d\n", i, grau);
    }

    int tamanho_Grafo = 0;
    int tam = 0;

    for (int i=0; i<ordem; i++){

        for (int j=0; j<ordem; j++){
            if (grafo[i][j] == 1){
                tam++;
            }
        }
        if (tam > tamanho_Grafo){
            tamanho_Grafo = tam;
        }

    }
    printf("tamanho do grafo:%d\n", tamanho_Grafo);
}

int main(){
    int ordem, tamanho;

    printf("vertices:");
    scanf("%d", &ordem);

    printf("arestas:");
    scanf("%d", &tamanho);

    int grafo[100][100] = [0];

    printf("digite as arestas {pares de vértices}:\n");
    for(int i =0; i<tamanho; i++){
        int u, v;
        scanf("%d, %d", &u, &v);
        grafo[u][v] = 1;
    }

    return 0;
}