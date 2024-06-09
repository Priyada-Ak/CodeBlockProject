#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40];
    float capital,interest,day;

    printf("Enter your account name : ");
    scanf("%s",name);

    printf("Enter your capital : ");
    scanf("%f",&capital);

    printf("Enter yearly interest rate : ");
    scanf("%f",&interest);

    printf("Enter the number of days : ");
    scanf("%f",&day);

    printf("Account name : %s\n",name);

    balance = c+((c*(r/100))*(d/365));
    printf("Balance amount %0.2f\n",balance);

    interestyear = (c*(r/100))*(d/365);
    printf("Your interest per year is %0.2f Baht\n",interestyear);

    return 0;
}
