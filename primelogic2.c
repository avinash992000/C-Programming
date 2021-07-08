#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number<=1)
    {
        printf("%d is not a prime number",number);
        return 0;//JUmp out from program[program will be closed]
    }
    short flag = 1;//Check variable
    int i;
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            flag = 0;
            break;//JUmp out from loop
        }
    }
    if(flag == 1)   printf("%d is a prime number",number);
    else            printf("%d is not a prime number",number);
    return 0;
}
