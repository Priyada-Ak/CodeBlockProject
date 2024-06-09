#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];
    float distance ;
    float velocity ;
    int Hours = 0;
    int minute = 0;
    int second = 0;
    float Time = 0;

    printf("Input your name                 :");
    scanf("%s",&name);
    printf("Input Distance (KM)             :");
    scanf("%f",&distance);
    printf("Input avg velocity (KM/H)       :");
    scanf("%f",&velocity);

    Time  = (float)distance/velocity;
    Hours = Time;
    minute = ((Time*3600)-(Hours*3600))/60;
    second = (Time*3600)-(Hours*3600)-(minute*60);

    printf("My name is %s\n", name);
    printf("Distance between house and school : %.2f KMs\n",distance );
    printf("I walk by velocity (KM / Hour)    : %.2f\n",velocity);
    printf("Time from home to school          : ");
    printf("%d Hours, %d mins, %d secs", Hours, minute, second);

    return 0;
}
