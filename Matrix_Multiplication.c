#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **matrix, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int **matrix_multiply(int **matrix1, int **matrix2, int m1, int n1, int m2, int n2) {
    if (n1 != m2) {
        printf("Error: Invalid matrix dimensions.\n");
        return NULL;
    }
    int **result = malloc(m1 * sizeof(int *));
    int i, j, k;
    for (i = 0; i < m1; i++) {
        result[i] = malloc(n2 * sizeof(int));
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main() {
    int m1, n1, m2, n2;
    printf("Enter dimensions of first matrix (m1 x n1): ");
    scanf("%d %d", &m1, &n1);
    int **matrix1 = malloc(m1 * sizeof(int *));
    int i, j;
    for (i = 0; i < m1; i++) {
        matrix1[i] = malloc(n1 * sizeof(int));
        for (j = 0; j < n1; j++) {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter dimensions of second matrix (m2 x n2): ");
    scanf("%d %d", &m2, &n2);
    int **matrix2 = malloc(m2 * sizeof(int *));
    for (i = 0; i < m2; i++) {
        matrix2[i] = malloc(n2 * sizeof(int));
        for (j = 0; j < n2; j++) {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int **result = matrix_multiply(matrix1, matrix2, m1, n1, m2, n2);
    if (result != NULL) {
        printf("Result of matrix multiplication:\n");
        print_matrix(result, m1, n2);
    }
    return 0;
}
