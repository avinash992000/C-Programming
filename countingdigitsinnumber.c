/*
    Problem: Count digits in number
    Logic:
        -> 1.Initialize count = 0
        -> 2.REad number into the program
        -> 3.Check if the number is not equal to zero
            i.-> If not,
                I.-> Increment count value by 1
                II.-> Then update number by dividing 10
                III.-> go back and perform step 3
            ii.->If yes,
                I.-> print count value
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number == 0)
    {
        printf("Total digits in a given number: %hd",1);
        return 0;
    }

    short count = 0;
    while(number!=0)//number>0 //number
    {
        count++;
        number = number / 10;
    }

    printf("Total digits in a given number: %hd",count);
    return 0;
}
