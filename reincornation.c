/*
    Statement: 
        -> Input: Two numbers base,exp
        -> Output: base^exp
        Exampls:
            base: 5
            exp: 3
            Output: 5 * 5 * 5 = 25 * 5 = 125
            exp: 3 => 1 + 1 + 1
                    1: 1 * 5 => 5[R]
                    1: 5[R] * 5 => 25
                    1: 25[R] * 5 => 125
*/
#include<stdio.h>
int main()
{
    int base,exp;
    printf("Enter base and exp value: ");
    scanf("%d %d",&base,&exp);

    long long result = 1;
    int i;
    for(i=1;i<=exp;i++)
    {
        result = result * base;
    }

    printf("%d power %d is: %lld",base,exp,result);
    return 0;
}
