#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];
    int distance;
    int velocity;
    float Time = (float)distance/velocity;

    int Hours = 0;
    int Min = 0;
    int Sec = 0;

    printf("Input your name                 :");
    scanf("%s",&name);
    printf("Input Distance (KM)             :");
    scanf("%d",&distance);
    printf("Input avg velocity (KM/H)       :");
    scanf("%d",&velocity);

    Hours = Time;
    Min = ((Time*3600)-(Hours*3600))/60;
    Sec = (Time*3600)-(Hours*3600)-(Min*60);

    printf("My name is %s\n", name);
    printf("Distance between house and school : %d KMs\n",distance );
    printf("I walk by velocity (KM / Hour)    : %d\n",velocity);
    printf("Time form home to school          : ");
    printf("%d Hours, %d mins, %d secs", Hours, Min, Sec);
    return 0;
    return 0;
}
