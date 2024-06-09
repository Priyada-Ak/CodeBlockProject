#include <stdio.h>
#include <stdlib.h>

int main()
{
    int subject1,subject2,total,percentage;
    printf("\n Enter marks of 2 subjects each out of 100 ");
    printf("\n\n ********************************************");
    printf("\n\n Structure in C = ");
    scanf("%d",&subject1);
    printf("\n Python = ");
    scanf("%d",&subject2);
    total=subject1+subject2;
    printf("\n Total marks = %d/200",total);
    percentage=total/2;
    printf("\n\n Percentage = %d%",percentage);
        if(percentage>=80)
            printf("\n\n Your Grade : A+");
        else if(percentage>=75)
            printf("\n\n Your Grade : A");
        else if(percentage>=60)
            printf("\n\n Your Grade : B");
        else if(percentage>=45)
            printf("\n\n Your Grade : C");
        else if(percentage>=35)
            printf("\n\n Your grade : D");
        else
        printf("\n\n You Are Fail");
        return 0;
}
