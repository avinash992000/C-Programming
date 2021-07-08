#include<stdio.h>
#include<ctype.h>
int main()
{
    int i, count = 0;
    for(i=0;i<=255;i++)
    {
        if(isgraph(i) != 0)
        {
            printf("%c ",i);
            count++;
        }
    }
    printf("\n\nTotal: %d",count);
    return 0;
}
