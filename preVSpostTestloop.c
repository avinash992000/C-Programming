/*
    Pre - test loop:
        1. To enter into body of loop, first expression will be evaluated then statements will be executed
        2. If expression fails for the first time, 0 times the body of the statements will executes. [Minimum number of executions]
        3. Examples: Airport, email login
    POst - test loop:
        1. First body of statements will be executed later expression will be evaluated.
        2. If expression fails for the first time, 1 time the body of the statements will execute. [Minimum number of executions]
        3. Examples: RTC Bus, Gmail registration
*/
#include<stdio.h>
int main()
{
    int x = 10;
    for( ; x<=9 ; x++)
    {
        printf("Sorry..... I cant execute");
    }

    do
    {
        printf("Yes... I am executing one time");
        x++;
    } while (x<=9);
    
}
