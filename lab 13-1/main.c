#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_number;
    int ID_number;
    char name[50];
    int score;

}stud[100];

int main()
{
    int i,n;

    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("No. %d\tStudent ID : ",i+1);
        scanf("%d",&stud[i].ID_number);

        printf("\tName : ");
        scanf("%s",stud[i].name);

        printf("\tScore : ");
        scanf("%d",&stud[i].score);

        stud[i].roll_number = i+1;

    }

        printf("======== Students ========\n");

     for(i=0; i<n; i++)
    {
        printf("--------- No. %d ---------\n",stud[i].roll_number);
        printf("Student ID : %d\n",stud[i].ID_number);
        printf("Name       : %s\n",stud[i].name);
        printf("Score      : %d\n",stud[i].score);
    }
    return 0;
}
