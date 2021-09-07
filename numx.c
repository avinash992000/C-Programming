/*
num1+num2=num3
where one of num1 or num2 or num3 is replaced by an X. find the X value.

i/p:

i/p : 5+X=7

o/p : 2
*/
#include <stdio.h>
int main()
{
    char str[100];
    char num1,num2,num3;
    int ans;
    scanf("%s",str);
    num1 = str[0];
    num2 = str[2];
    num3 = str[4];
    if(num1 == 'X')
        ans = (num3-'0')-(num2-'0');
    else if(num2 == 'X')
        ans = (num3-'0')-(num1-'0');
    else if(num3 == 'X')
        ans = (num1-'0')+(num2-'0');
    printf("%d",ans);
    return 0;
}


//0= 48











