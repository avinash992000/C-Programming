/*
    number of rows = 5
    *
    **
    ***
    ****
    *****
*/
#include<stdio.h>
int main()
{
    int numberOfRows;
    printf("How many rows you want to print? Answer: ");
    scanf("%d",&numberOfRows);

    int i,j;
    for(i=1;i<=numberOfRows;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
