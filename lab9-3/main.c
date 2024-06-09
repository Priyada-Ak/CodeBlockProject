
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i;
    int countA=0;
    int countE=0;
    int countI=0;
    int countO=0;
    int countU=0;
    char a='a';
    char e='e';
    char ii='i';
    char o='o';
    char u='u';

    printf("Enter word:");
    gets(s);
    printf("%s",s);
//////////////////
    for(i=0;s[i];i++)
    {
    	if(s[i]==a)
    	{
          countA++;
		}
 	}
	printf("\n%c:",a);
    for(i=0; i<countA; i++)
    {
        printf("*");
    }
////////////////////
    for(i=0;s[i];i++)
    {
    	if(s[i]==e)
    	{
          countE++;
		}
 	}
	printf("\n%c:",e);
    for(i=0; i<countE; i++)
    {
        printf("*");
    }
//////////////////////
    for(i=0;s[i];i++)
    {
    	if(s[i]==ii)
    	{
          countI++;
		}
 	}
	printf("\n%c:",ii);
    for(i=0; i<countI; i++)
    {
        printf("*");
    }
/////////////////////
    for(i=0;s[i];i++)
    {
    	if(s[i]==o)
    	{
          countO++;
		}
 	}
	printf("\n%c:",o);
    for(i=0; i<countO; i++)
    {
        printf("*");
    }
////////////////////
    for(i=0;s[i];i++)
    {
    	if(s[i]==u)
    	{
          countU++;
		}
 	}
	printf("\n%c:",u);
    for(i=0; i<countU; i++)
    {
        printf("*");
    }

    return 0;
}
