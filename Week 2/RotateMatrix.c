void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    int temp;
    int i, j;

    // Transpose the matrix
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
      for (i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;

            start++;
            end--;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
