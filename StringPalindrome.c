/*
    Problem Statement: Identify the given string is palindrome or not
    Procedure:
        -> Identify the length of string:
            -> To identify the length of string need to know what is the termination character [\0]
        -> Compare the characters by following:
            i = 0, j=len-1
            -> COmpare ith Character with jth character, if both are same increment i value by 1 and decrement j value by 1, Then repeat same step
            -> If characters are not same, print not a palindrome; 
*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = 0, i = 0, j;
    //Input: 0:J 1:e 2:e 3:v 4:a 5:n 6:\0
    while(str[i]!='\0')
    {
        len++;//6
        i++;
    }

    i = 0; j = len-1;
    while(i < j)
    {
        //0:m 1:a 2:d 3:A 4:m
        if(str[i] != str[j])
        {
            printf("%s is not a palindrome",str);
            return 0;
        }
        i++; j--;
    } 
    printf("%s is a palindrome",str);
    return 0;
}
