#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstn[20],lastn[20];
    float creditM,gradeM,creditE,gradeE;
    printf("Enter first name : ");
    scanf("%s",firstn);
    printf("Enter last name : ");
    scanf("%s",lastn);
    printf("Mathematic : #credit #grade(0-4) : ");
    scanf("%f %f",&creditM,&gradeM);
    printf("English    : #credit #grade(0-4) : ");
    scanf("%f %f",&creditE,&gradeE);
    float GPA = ((creditM*gradeM)+(creditE*gradeE))/(creditM+creditE);
    printf("GPA of %s %s is %0.2f ",firstn,lastn,GPA);
    return 0;
}
