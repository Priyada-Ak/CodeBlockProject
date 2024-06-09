#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a1,a2,a3,a4,a5;
    printf("Enter a number : ");
    scanf("%c%c%c%c%c",&a1,&a2,&a3,&a4,&a5);
    printf("Output string : %c%c%c%c%c",a1+16,a2+16,a3+16,a4+16,a5+16);
    return 0;
}
