/*
    Problem: Calculating simple intrest
    Input: principle, time, rate
    Outpur: (p*t*r)/100
*/
#include<stdio.h>
int main()
{
    float pr, ti, ra;
    printf("Enter priciple amount, time period in years, rate of intrest: ");
    scanf("%f %f %f",&pr,&ti,&ra);

    float si = (pr * ti * ra) / 100;

    printf("Simple intrest amount: %f",si);
    return 0;
}
