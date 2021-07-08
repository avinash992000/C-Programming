#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n], i, sum = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);//arr=> &arr[0]
        sum += *(arr+i);
    }
    printf("\nSum is: %d",sum);
}
