#include <stdio.h>
#include <stdlib.h>

int main()
{
    int per1,per2,percent;
    float score1,score2;
    float avg,gscore1,gscore2;

    printf("Enter scores of Mathematic sub-testing (four times)! \n");
    printf("Enter a percentage of the first testing:");
    scanf("%d", &per1);
    printf("Enter a percentage of the second testing:");
    scanf("%d", &per2);

    percent = per1+per2;

    if( percent <= 100)
    {
        printf("Score 1:");
        scanf("%f", &score1);
        printf("Score 2:");
        scanf("%f", &score2);

        gscore1 = (score1*per1)/100;
        gscore2 = (score2*per2)/100;

        avg = gscore1+gscore2;
        if(avg <= 100 && avg >=80)
            printf("Your average score is %.0f, your grade is A ",avg);
        else if(avg <= 79.99 && avg >= 70)
            printf("Your average score is %.2f, your grade is B ",avg);
        else if(avg <= 69.99 && avg >= 50)
            printf("Your average score is %.2f, your grade is B ",avg);
        else if(avg <= 49.99 && avg >= 30)
            printf("Your average score is %.2f, your grade is D ",avg);
        else if(avg <= 29.99 && avg >= 0)
            printf("Your average score is %.1f, your grade is F ",avg);
    }

    else
    {
        printf("Error: Invalid percentages ");
    }


    return 0;
}
