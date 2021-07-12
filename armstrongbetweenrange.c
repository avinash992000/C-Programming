#include<stdio.h>
int main()
{
    long int number;
    for(number=101;number<200;number++){
    //printf("Enter a number: ");
    //scanf("%d",&number);//153
    int temp = number, result = 0, rem;

    while(temp!=0)//153!=0[T], 15!=0[T], 1!=0[T], 0!=0[False]
    {
        rem = temp%10;//153%10=3, 15%10=5, 1%10=1
        result = result + (rem * rem * rem);//0+27=27, 27+125=152, 152+1=153
        temp = temp / 10;//153/10=15, 15/10=1, 1/10=0
    }

    if(result == number)    printf("%ld is an armstrong number",number);
    }
    return 0;
}
