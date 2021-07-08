#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
        1
       232
      34543
     4567654
    567898765
*/
int main() 
{ 
    int n;
    printf("Enter total number of rows: ");
    scanf("%d",&n);//3
    int i,j;
    for(i=1;i<=n;i++)
    {
        int c1 = 0, c2 = 0;
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
            c1++;
        }
        for(j=0;j!=i*2-1;j++)
        {
            if(c1 <= n-1)
            {
                printf("%d",i+j);
                ++c1;
            }
            else
            {
                ++c2;
                printf("%d",(i+j-2*c2));
            }
        }
        printf("\n");
    }
    return 0;
}
