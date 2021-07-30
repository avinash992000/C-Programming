#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


/*int power(int a, int b)
{
    int x=1;
    for(int i=0;i<b;i++)
    {
        x*=2;
    }
    return x;
}*/
void printSubsequences(int a[], int n)
{
    unsigned int s = pow(2, n);//we can use power function also

    for (int i = 1; i < s; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))//-> here [1<<j defines left shift (ex: in first itration 1,second 10,third 100 etc) means 0 will be added to it] i & (1<<j) i bitwise and with shift operator if it true means a positive value it prints
                printf("%d ",a[j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    //printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[100];
    //printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("All Non-empty Subsequences\n");printSubsequences(a, n);
    return 0;
}
