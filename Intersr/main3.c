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
    printf("Account name : %s \n",name);
    float x = ((capital*interest)/100);
    float interestyear = (day/365)*x;
    float balance = (day/365)*x+capital;
    printf("Balance amount : %0.2f\n",balance ) ;
    printf("Your interest per year is %0.2f Baht\n",interestyear);
    return 0;
}
