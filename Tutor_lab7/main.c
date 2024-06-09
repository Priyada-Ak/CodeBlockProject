#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n;
    int w[10];
    int m[10];
    int f[10];

    float sumW=0;
    float sumM=0;
    float sumF=0;
    float sumT=0;
    float meanW;
    float meanM;
    float meanF;
    float meanT;

    float sumSDW=0,DivW,sdW,DeviaW;
    float sumSDM=0,DivM,sdM,DeviaM;
    float sumSDF=0,DivF,sdF,DeviaF;
    float sumSDT=0,DivT,sdT,DeviaT;

    printf("Enter the number of students :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter score of student #%d [work midterm final]:",i+1);
        scanf("%d %d %d",&w[i],&m[i],&f[i]);

        sumW += w[i];
        sumM += m[i];
        sumF += f[i];

        meanW =sumW/n;
        meanM =sumM/n;
        meanF =sumF/n;

        sumT = sumW+sumM+sumF;
        meanT = sumT/n;
    }


    for(i=0; i<n; i++)
    {

        DeviaW = w[i] - meanW;
        sumSDW += DeviaW * DeviaW;
        DivW = sumSDW/(n-1);
        sdW = sqrt(DivW);

        DeviaM = m[i] - meanM;
        sumSDM += DeviaM * DeviaM;
        DivM = sumSDM/(n-1);
        sdM = sqrt(DivM);

        DeviaF = f[i] - meanF;
        sumSDF += DeviaF * DeviaF;
        DivF = sumSDF/(n-1);
        sdF = sqrt(DivF);

        DeviaT = (w[i]+m[i]+f[i]) - meanT;
        sumSDT += DeviaT * DeviaT;
        DivT = sumSDT/(n-1);
        sdT = sqrt(DivT);

    }



    printf("Name            W(20)   M(40)   F(40)   Total (100)");

    for(i=0; i<n; i++)
    {
         printf("\nstudent #%d      %d      %d      %d      %d",i+1,w[i],m[i],f[i],w[i]+m[i]+f[i]);

    }
         printf("\nMean            %.2f   %.2f   %.2f   %.2f", meanW,meanM,meanF,meanT);
         printf("\nS.D.            %.2f   %.2f   %.2f   %.2f",sdW,sdM,sdF,sdT);


    return 0;

    }
