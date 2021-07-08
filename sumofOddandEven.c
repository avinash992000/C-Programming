/*
    1 2 3 4 5 6 7 8 9 10
    1 3 5 7 9
    2 4 6 8 10
    #logic1:
        -> i%2==0 -> Even => add to evenSUm
        -> i%2==1 -> Odd  => Add to Odd
    #logic2:
        -> EvenSum => i=0;i<=n;i+=2 => 0 2 4 6 8 10 => 30
        -> OddSum => i=1;i<=n;i+=2 => 1 3 5 7 9 => 25
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    int i, oddSum = 0, evenSum = 0;
    for(i=1;i<=n;i+=2)  oddSum += i;
    for(i=2;i<=n;i+=2)  evenSum += i;

    printf("Odd Sum: %d\n\nEvenSum: %d",oddSum,evenSum);
    return 0;
}
