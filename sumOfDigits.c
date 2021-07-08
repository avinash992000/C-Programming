#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int sumOfDigits = 0;
    while(n)//n!=0, n>0
    {
        sumOfDigits = sumOfDigits + n%10; //sumOfDigits += n%10
        n = n/10; //n /= 10;
    }
    printf("%d",sumOfDigits);    
	return 0;
}
