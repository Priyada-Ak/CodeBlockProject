#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[40];
    int i,n,c=0;

    printf("Enter your word:");
    scanf("%s",&word);
    n=strlen(word);

    printf("The length of %s is %d\n",word,n);

    for(i=0;i<n/2;i++)
    {
    	if(word[i]==word[n-i-1])
    	c++;
 	}
 	if(c==i)
 	    printf("%s is palindrome.",word);
    else
        printf("%s is not palindrome.",word);

    return 0;

}
