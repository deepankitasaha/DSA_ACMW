#include <stdio.h>

void setZeroes(int** matrix, int matrixSize, int *matrixColSize) {
    int i, j;
    int N = matrixSize, M = *matrixColSize;
    int rows[matrixSize];
    int cols[M];

    for(i = 0; i < N; i++) rows[i] = 0;
    for(j = 0; j < M; j++) cols[j] = 0;

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            if(matrix[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            if(rows[i] == 1 || cols[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n ");
    }
}

