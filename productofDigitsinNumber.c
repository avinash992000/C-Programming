#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("Product value is: %d",0);
        return 0;
    }

    long product = 1;
    while(n!=0)
    {
        product *= n%10;
        n /= 10;
    }
    printf("Product value is: %ld",product);    
	return 0;
}
