#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int b[10];
    int i;
    int n;


    printf("Enter the size of array (A and B):");
    scanf("%d",&n);

    printf("Enter elements of an array \"A\":\n");
    for( i=0; i<n; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter elements of an array \"B\":\n");
    for( i=0; i<n; i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&b[i]);
    }

    printf("A + B is\n");

    for( i=0; i<n; i++)
    {
        printf("A[%d] + ",i);
        printf("B[%d] = ",i);
        printf("%d\n",a[i]+b[i]);
    }

    return 0;

}
