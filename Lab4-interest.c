#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, r, interest;
    printf("Enter your capital : ");
    scanf("%f", &c);

    printf("Enter yearly interest rate : ");
    scanf("%f", &r);

    interest = c*(r/100);
    printf("Your interest per year is %.2f Baht\n", interest );
    return 0;
}
