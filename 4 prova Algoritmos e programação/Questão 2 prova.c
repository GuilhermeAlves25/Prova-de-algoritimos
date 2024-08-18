#include <stdio.h>

// Função para multiplicar duas matrizes quadradas de ordem n
void multiplica_matrizes(int n, int A[n][n], int B[n][n], int C[n][n]){
    int i, j, k;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = 0; // Inicializando o elemento C[i][j] para garantir que não haja lixo na memória
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int i, j, n;

    // Recebe o tamanho da matriz (supondo que a matriz é quadrada)
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    // Declarando as matrizes A, B e a matriz resultante C
    int A[n][n], B[n][n], C[n][n];

    // Recebendo os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Recebendo os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplicando as matrizes A e B e armazenando o resultado na matriz C
    multiplica_matrizes(n, A, B, C);

    // Exibindo a matriz resultante C
    printf("Matriz Resultante:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
