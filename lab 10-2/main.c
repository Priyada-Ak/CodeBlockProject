#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i;



    printf("Enter the number of students : ");
    scanf("%d",&n);

    int score[n];
    char name[n][20],grade[n];

    for(i=0;i<n;i++)
        {
    printf("Student #%d\tName :",i+1);
    scanf("%s",name[i]);
    printf("\t\tScore:");
    scanf("%d",&score[i]);

    }
    for(i=0;i<n;i++){
    if(score[i]>=80){
        grade[i]='A';
    }else if(score[i]>=70){
        grade[i]='B';
    }else if(score[i]>=60){
        grade[i]='C';
    }else if(score[i]>=50){
        grade[i]='D';
    }else{
        grade[i]='F';
    }

    }
    printf("No.\tName\tScore\tGrade\n");
    for(i=0;i<n;i++){
    printf("%d\t%s\t%d\t%c\n",i+1,name[i],score[i],grade[i]);
    }
    return 0;
}
