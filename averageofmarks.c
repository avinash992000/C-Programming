/*
    Input:
        -> Total number of subjects
        -> Calculate sum of four subjects
        -> Find avg = sum/totalnumberofsubjects
*/
#include<stdio.h>
/*int main()
{
    float wt, gd, ti, hr;
    printf("Enter Written test, Group Discussion, Technical Interview and HR marks: ");
    scanf("%f %f %f %f",&wt,&gd,&ti,&hr);
    float sum = wt + gd + ti + hr;//Perc: (sum/400) * 100 
    float avg = sum / 4;
    printf("Average marks are: %.2f",avg);
}*/

int main()
{
    int n;
    printf("Enter total number of subjects: ");
    scanf("%d",&n);

    float sum = 0.0, marks;
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Enter %d subject marks: ",i);
        scanf("%f",&marks);
        sum = sum + marks;
    }

    printf("The average is: %.2f", sum/n);
}
