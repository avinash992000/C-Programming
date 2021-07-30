#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    int n;
    char a[1000];
    gets(a);
    n=strlen(a);
    printf("%d",n);
    unsigned int s = pow(2, n);
    for (int i = 1; i < s; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
                printf("%c ",a[j]);
        }
        printf("\n");
    }
    return 0;
}
