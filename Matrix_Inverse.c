#include <stdio.h>

double determinant(double matrix[][3], int n) {
    double det = 0;
    int i, j, k;
    double submatrix[3][3];
    if (n == 2) {
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    }
    else {
        for (k = 0; k < n; k++) {
            i = 0;
            for (j = 1; j < n; j++) {
                int l = 0;
                for (; l < n; l++) {
                    if (l == k) {
                        continue;
                    }
                    submatrix[i][l] = matrix[j][l];
                }
                i++;
            }
            det += (k % 2 == 0 ? 1 : -1) * matrix[0][k] * determinant(submatrix, n - 1);
        }
    }
    return det;
}

void inverse(double matrix[][3], int n, double det) {
    double inverse[3][3];
    int i, j, k, l;
    double submatrix[3][3];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            k = 0;
            l = 0;
            while (k < n) {
                if (k == i) {
                    k++;
                    continue;
                }
                l = 0;
                while (l < n) {
                    if (l == j) {
                        l++;
                        continue;
                    }
                    submatrix[k < i ? k : k - 1][l < j ? l : l - 1] = matrix[k][l];
                    l++;
                }
                k++;
            }
            inverse[j][i] = ((i + j) % 2 == 0 ? 1 : -1) * determinant(submatrix, n - 1) / det;
        }
    }
    printf("Inverse of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%lf ", inverse[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    double matrix[3][3], det;
    printf("Enter the size of the matrix (max 3x3): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
    det = determinant(matrix, n);
    if (det == 0) {
        printf("The matrix is singular, it has no inverse.\n");
    }
    else {
        inverse(matrix, n, det);
    }
    return 0;
}
