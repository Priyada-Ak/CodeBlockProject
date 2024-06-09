#include <stdio.h>
#include <stdlib.h>


int main()

{
    char num1,num2,num3,num4,num5,num6,num7,num8;
    int b0,b1,b2,b3,b4,b5,b6,b7;
    int Octal,Octal2,Octal3;

    printf("Input Binary Number (8 digits) : ");
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
        Octal  = b7*2 + b6*1;
        Octal2 = b5*4 + b4*2 + b3*1;
        Octal3 = b2*4 + b1*2 + b0*1;
        printf("Octal is %d%d%d\n", Octal,Octal2,Octal3);
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

