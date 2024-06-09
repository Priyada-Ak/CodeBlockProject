#include <stdio.h>
#include <stdlib.h>


int main()

{
    char num1,num2,num3,num4,num5,num6,num7,num8,hex11,hex12;
    int b0 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,b5 = 0,b6 = 0,b7 = 0;
    int hex1,hex2;

    printf("Input Binary Number (8 digits) : ");
    scanf("%c%c%c%c%c%c%c%c",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8);

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
        b0 = num1-48;
        b1 = num2-48;
        b2 = num3-48;
        b3 = num4-48;
        b4 = num5-48;
        b5 = num6-48;
        b6 = num7-48;
        b7 = num8-48;

        if(b0<=1 && b1<=1 && b2<=1 && b3<=1 && b4<=1 && b5<=1 && b6<=1 && b7<=1)
        {
            printf("Binary number is %d%d%d%d%d%d%d%d\n",b0,b1,b2,b3,b4,b5,b6,b7);

            hex1 = (b0*8)+(b1*4)+(b2*2)+(b3*1);
            hex2 = (b4*8)+(b5*4)+(b6*2)+(b7*1);

       if(hex1<=9)
            hex11 = hex1+48;
       if(hex2<=9)
            hex12 = hex2+48;
       if(hex1>9)
            hex11 = hex1+55;
       if(hex2>9)
            hex12 = hex2+55;
    }
    printf("Hexadecimal is %c%c\n",hex11,hex12);
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

