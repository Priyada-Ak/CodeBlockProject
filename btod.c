#include <stdio.h>
#include <stdlib.h>


int main()

{
    char num1,num2,num3,num4,num5,num6,num7,num8;
    int b0 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,b5 = 0,b6 = 0,b7 = 0;
    int Decimal;

    printf("Input Binary number (8 digits) : ");
    scanf("%c%c%c%c%c%c%c%c",&num8,&num7,&num6,&num5,&num4,&num3,&num2,&num1);

    if ( num8=='1' || num8=='0')
    {
        if ( num7=='1' || num7=='0')
        {
            if ( num6=='1' || num6=='0')
            {
                 if ( num5=='1' || num5=='0')
                 {
                      if ( num4=='1' || num4=='0')
                      {
                           if ( num3=='1' || num3=='0')
                           {
                                if ( num2=='1' || num2=='0')
                                {
                                     if ( num1=='1' || num1=='0')
        {
        printf("Binary Number is %c%c%c%c%c%c%c%c\n",num8,num7,num6,num5,num4,num3,num2,num1);
        b0 = num1-48;
        b1 = num2-48;
        b2 = num3-48;
        b3 = num4-48;
        b4 = num5-48;
        b5 = num6-48;
        b6 = num7-48;
        b7 = num8-48;
        Decimal = b7*128 + b6*64 + b5*32 + b4*16 + b3*8 + b2*4 + b1*2 + b0*1;
        printf("Decimal is %d", Decimal);
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }
        }
        else
            {
            printf("Error! digit must be 1 or 0");
            }



        return 0;
}

