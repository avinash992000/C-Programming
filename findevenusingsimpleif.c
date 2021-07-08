/*
    FInd even number using simple if statement 
    Logic: 
        -> Divide the number by 2 and check the remainder value is equal to 0 
        -> If equal to zero print EVen number
        -> Expression:
            -> I. number%2 == 0
            -> II. number%2 != 1
            -> III. !(number % 2) == 1
            -> IV. (number&1) == 0 / !(number&1)
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("%d is an even number\n",number);
    }

    if(number % 2 != 1)
    {
        printf("%d is an even number\n",number);
    }

    if(!(number % 2) == 1)
    {
        printf("%d is an even number\n",number);
    }

    if(!(number & 1))
    {
        printf("%d is an even number\n",number);
    }
    printf("Thank You!");
    return 0;
}
