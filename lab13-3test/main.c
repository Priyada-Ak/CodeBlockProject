#include <stdio.h>
#include <stdlib.h>
#define MAX_STD_NUM 100

struct Student
{
    int roll_number;
    int ID_number;
    char name[50];
    int score;

};

void printStudent(struct Student pstds[MAX_STD_NUM],int n)

{
    int i;
    for(i=0; i<n; i++)
    {
        printf("--------- No. %d ---------\n",pstds[i].roll_number);
        printf("Student ID : %d\n",pstds[i].ID_number);
        printf("Name       : %s\n",pstds[i].name);
        printf("Score      : %d\n",pstds[i].score);
    }
}

void inputStudent(struct Student pstds[MAX_STD_NUM],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("No. %d\tStudent ID : ",i+1);
        scanf("%d",&pstds[i].ID_number);

        printf("\tName : ");
        scanf("%s",pstds[i].name);

        printf("\tScore : ");
        scanf("%d",&pstds[i].score);

        pstds[i].roll_number = i+1;

    }

}
void searchStudent(int search_id,struct Student pstds[MAX_STD_NUM], int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        if (pstds[i].ID_number == search_id)
        {
            printf("*** Found student ***\n");
            printf("--------- No. %d ---------\n",pstds[i].roll_number);
            printf("Student ID : %d\n",pstds[i].ID_number);
            printf("Name       : %s\n",pstds[i].name);
            printf("Score      : %d\n",pstds[i].score);
            return ;
        }
    }
    printf("\n!!! Student not found !!!\n\n");
}

int main()
{
    int n;
    int search_id;
    char ch;
    struct Student std;
    struct Student pstds[MAX_STD_NUM];

    printf("Enter the number of students : ");
    scanf("%d",&n);
    inputStudent(pstds,n);
    printf("======== Students ========\n");
    printStudent(pstds,n);

     printf("======== Students search ========\n");

    do
    {
    printf("Enter Student ID : ");
    scanf("%d", &search_id);
    searchStudent(search_id, pstds, n);

    printf("Do you want to continue? (y/n) ");
    scanf("%s",&ch);

    }while(ch == 'y');


    return 0;
}
