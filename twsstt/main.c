#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num1,num2,num3,num4,num5,num6,num7,num8,hex11,hex12;
    int b0 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,b5 = 0,b6 = 0,b7 = 0;
    int ch,Decimal,Octal,Octal2,Octal3,hex1,hex2;

    printf("1. Convert  Binary  to Decimal\n");
    printf("2. Convert Binary to Octal\n");
    printf("3. Convert Binary to Hexadecimal\n");
    printf("4. Exit\n");
    printf("Choose a choice: ");
    scanf("%d",&ch);

     if(ch==4)
        {
        printf("Exit completed..\n\n");
        exit(EXIT_SUCCESS);
        }
     else if (ch > 4)
        {
        printf("not valid option!\n\n");
        exit(EXIT_SUCCESS);
        }

        printf("Input Binary number (8 digits) : ");
        scanf(" %c%c%c%c%c%c%c%c",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8);
        b0 = num1-48;
        b1 = num2-48;
        b2 = num3-48;
        b3 = num4-48;
        b4 = num5-48;
        b5 = num6-48;
        b6 = num7-48;
        b7 = num8-48;

        if(   (b0==1 || b0==0) && (b1==1 || b1==0) && (b2==1 || b2==0) && (b3==1 || b3==0)
           && (b4==1 || b4==0) && (b5==1 || b5==0) && (b6==1 || b6==0) && (b7==1 || b7==0) )
        {
        printf("Binary Number is %c%c%c%c%c%c%c%c\n",num1,num2,num3,num4,num5,num6,num7,num8);
        }
        else
        {
            printf("Error! digit must be 1 or 0\n");
            exit(EXIT_SUCCESS);
        }

    if(ch==1)
    {
        Decimal = b0*128 + b1*64 + b2*32 + b3*16 + b4*8 + b5*4 + b6*2 + b7*1;
        printf("Decimal is %d\n", Decimal);
    }

    else if(ch==2)
    {

        Octal  = b0*2 + b1*1;
        Octal2 = b2*4 + b3*2 + b4*1;
        Octal3 = b5*4 + b6*2 + b7*1;
        printf("Octal is %d%d%d\n", Octal,Octal2,Octal3);
    }
    else if(ch==3)
    {
    if(b0<=1 && b1<=1 && b2<=1 && b3<=1 && b4<=1 && b5<=1 && b6<=1 && b7<=1)
    {
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
 return 0;
}

