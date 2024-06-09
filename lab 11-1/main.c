#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter row and column of matrix A and B (m n): ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("Enter the matrix A:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);


    // Displaying the matrix a[][]
    printf("\nMatrix A =\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix A =\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
