#include<stdio.h>

struct student
{
    int roll_no,marks;
    char name[25];

}stud[100],t;

void main()
{
    int i,j,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    	printf("Student #%d\tName :",i+1);
    	scanf("%s",stud[i].name);

    	printf("\t\tScore:");
    	scanf("%d",&stud[i].marks);

        stud[i].roll_no = i + 1;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].marks<stud[j+1].marks)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }

    char grade[n];

    	for(i=0;i<n;i++)
	{
    	if(stud[i].marks>=80)
		{

        	grade[i]='A';
    	}
		else if(stud[i].marks>=70)
		{
        	grade[i]='B';
    	}
		else if(stud[i].marks>=60)
		{
        	grade[i]='C';
    	}
		else if(stud[i].marks>=50)
		{
        	grade[i]='D';
    	}
		else
		{
        	grade[i]='F';
    	}

    }
    printf("No.\tName\tScore\tGrade\n");
    for(i=0;i<n;i++)
		{
    		printf("%d\t%s\t%d\t%c\n",stud[i].roll_no,stud[i].name,stud[i].marks,grade[i]);
    	}
}
