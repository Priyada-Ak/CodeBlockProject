#include <stdio.h>
#include <stdlib.h>

int main()
{

    int guess1;
    int guess2;
    char ch;
do
{
    printf("Guess the flipping coin (1 for heads, 0 for tails):");
    printf("\nEnter the first answer : ");
    scanf("%d", &guess1);
    printf("Enter the second answer : ");
    scanf("%d", &guess2);

    if( (guess1==0 && guess2==0) || (guess1==1 && guess2==1) )
    {
        printf("Your answer is %d-%d, ",guess1,guess2);
        printf("Com answer = %d-%d. ",guess1,guess2);
        printf("Your answer correct");
    }

    else if( (guess1==1 && guess2==0) || (guess1==0 && guess2==1) )
    {
        printf("Your answer is %d-%d, ",guess1,guess2);
        printf("Com answer = 1-1. ");
        printf("Your answer wrong!");
    }

        printf("\nDo you want to continue? (y/n)");
        scanf("%s",&ch);

}while( ch == 'y');

return 0;
}
