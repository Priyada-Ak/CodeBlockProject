#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b7,b6,b5,b4,b3,b2,b1,b0;
    float tmp;

    printf("Enter Binary floating point ( b b b b.f f f f) : ");
    scanf("%d %d %d %d.%d %d %d %d",&b7,&b6,&b5,&b4,&b3,&b2,&b1,&b0);
    printf("Binary = %d%d%d%d.%d%d%d%d\n",b7,b6,b5,b4,b3,b2,b1,b0);
    tmp = b7*8 + b6*4 + b5*2 + b4*1 + (float)b3/2 + (float)b2/4 + (float)b1/8 + (float)b0/16;
    printf("Decimal = %f\n" ,tmp);
    return 0;
}
