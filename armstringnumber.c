/*
    Problem: ArmStrong number
    #Logic:     
        -> 1. Take integer into the program [153]
        -> 2. Extract last digit from number [3]
        -> 3. Calculate digit * digit * digit [3*3*3 = 27]
        -> 4. Add above result to armStrong number [It has to be define as 0]
            armStrong += step3 value
        -> 5. Remove last digit from number [153 => 15]
        -> 6. Repeat 2,3,4 steps until the input number becomes 0 
        -> 7. Check if InputNumber is equal to armStrong 
            -> If yes, print arm strong number
            -> If no, print not an arm strong number 
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);//153
    int temp = number, result = 0, rem;

    while(temp!=0)//153!=0[T], 15!=0[T], 1!=0[T], 0!=0[False]
    {
        rem = temp%10;//153%10=3, 15%10=5, 1%10=1
        result = result + (rem * rem * rem);//0+27=27, 27+125=152, 152+1=153
        temp = temp / 10;//153/10=15, 15/10=1, 1/10=0
    }

    if(result == number)    printf("%d is an armstrong number",number);
    else                    printf("%d is not an armstrong number",number);
    return 0;
}
