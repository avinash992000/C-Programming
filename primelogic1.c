#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    int i, factorsCount = 0;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
            factorsCount++;
    }

    if(factorsCount == 2)   printf("%d is a prime number",number);
    else                    printf("%d is not a prime number",number);
}
