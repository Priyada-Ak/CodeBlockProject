#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40] = "Priyada Akama" ;
    int distance = 10;
    int velocity = 3;
    int Hours = 0;
    int minute = 0;
    int second = 0;
    float Time = 0;

    Time  = (float)distance/velocity;
    Hours = Time;
    minute = ((Time*3600)-(Hours*3600))/60;
    second = (Time*3600)-(Hours*3600)-(minute*60);

    printf("My name is %s\n", name);
    printf("Distance between house and school : %d KMs\n",distance );
    printf("I walk by velocity (KM / Hour)    : %d\n",velocity);
    printf("Time from home to school          : ");
    printf("%d Hours, %d mins, %d secs", Hours, minute, second);

    return 0;
}
