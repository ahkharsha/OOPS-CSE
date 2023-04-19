#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int i, j;

    // Read input matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if lower triangular
    int is_lower_triangular = 1;
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                is_lower_triangular = 0;
                break;
            }
        }
        if (is_lower_triangular == 0) {
            break;
        }
    }

    // Check if upper triangular
    int is_upper_triangular = 1;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (matrix[i][j] != 0) {
                is_upper_triangular = 0;
                break;
            }
        }
        if (is_upper_triangular == 0) {
            break;
        }
    }

    // Print results
    if (is_lower_triangular) {
        printf("The matrix is lower triangular.\n");
    } else if (is_upper_triangular) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not lower or upper triangular.\n");
    }

    return 0;
}
