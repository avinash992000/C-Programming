/*
    Logic:
        -> Lastdigit identification
        -> Totalnumber of digits identification
        -> firstDigit
        finalAnswer = lastdigit * pow(10,digits-1)
        finalAnswer += number %  pow(10,digits-1)
        finalAnswer -= lastDigit
        finalAnswer += firstDigit
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);//852<==>258

    //Identify last digit
    int lastDigit = number % 10;//2

    //Identify first digit
    int firstDigit = number;//8
    while(firstDigit >= 10)
        firstDigit = firstDigit / 10;
    
    //Identify total digits
    int temp = number, digits = 0;//3
    do
    {
        digits++;
        temp /= 10;
    } while (temp!=0);

    //Swap first digit with last digit
    int finalAnswer = lastDigit;
    finalAnswer = finalAnswer * pow(10,digits-1);//2*100 = 200
    finalAnswer = finalAnswer + number % (int)pow(10,digits-1);//200+52=252
    finalAnswer = finalAnswer - lastDigit;//252-2=250
    finalAnswer = finalAnswer + firstDigit;//250+8=258

    //finalAnswer = (((lastDigit * pow(10,digits-1)) + number % pow(10,digits-1)) - lastDigit)+firstDigit;

    printf("The swapped value is: %d",finalAnswer);
    
    return 0;
}
