#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40] = "Priyada Akama" ;
    int distance = 10;
    int velocity = 3;
    float Time = (float)distance/velocity;

    printf("My name is %s\n", name);
    printf("Distance between house and school : %d KMs\n",distance );
    printf("I walk by velocity(KM / Hour)     : %d\n",velocity);
    printf("I walk from home to school take   : %.2f Hours\n",Time);

    return 0;
}
