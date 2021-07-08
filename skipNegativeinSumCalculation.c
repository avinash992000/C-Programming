#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to enter? Answer: ");
    scanf("%d",&n);

    int number, i;
    int sum = 0;
    /*for(i=1;i<=n;i++)//52 -41[skips] 9 58 -63[skips]
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number == 0)  
            continue;//skips next statement execution
        sum = sum + number;
    }*/

    while(1)//infinite loop
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number == 0)  
            break;//skips from loop
        sum = sum + number;
    }
    printf("Sum value is: %d",sum);
}
