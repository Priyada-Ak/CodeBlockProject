#include <stdio.h>
#include <stdlib.h>

#define MAXROW 10
#define MAXCOL 10

void readMatrix(int A[][MAXCOL],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &A[i][j]);
}

void printMatrix(int A[][MAXCOL],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
    {

      for (j = 0; j < n; j++)
      {
         printf("%d ", A[i][j]);
      }
         printf("\n");
    }
}

void additionMatrix(int a[][MAXCOL],int b[][MAXCOL],int c[][MAXCOL],int m,int n)
{
    int i,j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
         c[i][j] = a[i][j] + b[i][j];
}

int main()
{
    int a[MAXROW][MAXCOL], b[MAXROW][MAXCOL],c[MAXROW][MAXCOL];
    int m, n, i, j;

    printf("Enter row and column of matrix A and B (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix A:\n");
    readMatrix(a,m,n);

    printf("Enter the matrix B:\n");
    readMatrix(b,m,n);

    printf("Matrix A = \n");
    printMatrix(a,m,n);

    printf("Matrix B = \n");
    printMatrix(b,m,n);

    printf("-------------------------");

    printf("\n\n");
    printf("A + B = \n");
    additionMatrix(a,b,c,m,n);
    printMatrix(c,m,n);


    return 0;
}












