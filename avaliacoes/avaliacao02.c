#include <stdio.h>

void print_matriz(int (*matrix)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void soma_matriz(int (*matrixA)[3], int (*matrixB)[3], int (*matrixC)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
}
int main() {
    int matrizA[3][3] = {{1, 2, 3}, {4, 5, 6}, {3, 6, 1}};
    int matrizB[3][3] = {{4, 6, 8}, {2, 2, 3}, {4, 5, 9}};
    int matrizC[3][3];
    soma_matriz(matrizA, matrizB, matrizC, 3);  
    printf ("A matriz A, é: \n"); print_matriz(matrizA, 3); 
    printf ("A matriz B, é: \n"); print_matriz(matrizB, 3); 
    printf ("A matriz C, que é a soma entre as matrizes A e B, é: \n"); print_matriz(matrizC, 3); 
    return 0;
}
