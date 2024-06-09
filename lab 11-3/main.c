#include <stdio.h>
#include <stdlib.h>

#define MAXROW 10
#define MAXCOL 10

void readMatrix(float Src[][MAXCOL],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%g", &Src[i][j]);
}

void printMatrix(float Src[][MAXCOL],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
      {
         printf("%g ", Src[i][j]);
      }
         printf("\n");
    }
}

void scalarMultiplication(float Des[][MAXCOL],float Src[][MAXCOL],int m, int n, float Scalar)
{
    int i,j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
         Des[i][j] = Scalar * Src[i][j];
}

int main()
{
    float Src[MAXROW][MAXCOL];
    float Des[MAXROW][MAXCOL];
    float Scalar;
    int m, n, i, j;

    printf("Enter row and column of matrix A and B (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix A:\n");
    readMatrix(Src,m,n);

    printf("Enter the scalar : ");
    scanf("%g",&Scalar);

    printf("\nMatrix A = \n");
    printMatrix(Src,m,n);

    printf("\n %gA = \n",Scalar);
    scalarMultiplication(Des,Src,m,n,Scalar);
    printMatrix(Des,m,n);

    return 0;
}












