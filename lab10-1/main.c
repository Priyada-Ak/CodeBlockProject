#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   printf("Enter row and column of matrix A and B (m n): ");
   scanf("%d %d", &m, &n);
   printf("Enter the matrix A:\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Enter the matrix B:\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);

    printf("Matrix A = \n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++)
        {
         ;
         printf("%d ",first[c][d]);
      }
      printf("\n");
   }

       printf("Matrix B = \n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         ;
         printf("%d ",second[c][d]);
      }
      printf("\n");
   }

   printf("\n\n");
   printf("A + B = \n");

   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d ", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
