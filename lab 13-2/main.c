#include <stdio.h>
#include <stdlib.h>
#define MAX_STD_NUM 100

struct Student
{
    int roll_number;
    int ID_number;
    char name[50];
    int score;

}stud[100];

void printStudent(struct Student std,int n)

{
    int i;
    for(i=0; i<n; i++)
    {
        printf("--------- No. %d ---------\n",stud[i].roll_number);
        printf("Student ID : %d\n",stud[i].ID_number);
        printf("Name       : %s\n",stud[i].name);
        printf("Score      : %d\n",stud[i].score);
    }
}

void inputStudent(struct Student pstds[MAX_STD_NUM],int n)
{
    int i;
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

}


int main()
{
    int n;
    struct Student std;
    struct Student pstds[MAX_STD_NUM];

    printf("Enter the number of students : ");
    scanf("%d",&n);
    inputStudent(pstds,n);
    printf("======== Students ========\n");
    printStudent(std,n);

    return 0;
}
