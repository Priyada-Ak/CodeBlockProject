#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b5,b4,b3,b2,b1,b0;
    int Octal,Octal2,Decimal;
    printf("Enter Binary Number (6 digits): ");
    scanf("%d %d %d %d %d %d",&b5,&b4,&b3,&b2,&b1,&b0);

    printf("Binary Number = %d%d%d%d%d%d\n",b5,b4,b3,b2,b1,b0);

    Decimal = b5*32 + b4*16 + b3*8 + b2*4 + b1*2 + b0*1 ;
    printf("Decimal Number = %d\n", Decimal);

    Octal = b5*4 + b4*2 + b3*1 ;
    Octal2 = b2*4 + b1*2 + b0*1 ;
    printf("Octal Number = %d%d\n", Octal,Octal2);

    return 0;
}
