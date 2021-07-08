#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    printf("Enter start,stop and counter value: ");
    /*
        S = "Jeevan Kumar"
        S[start:stop:counter]
    */
    int start, stop, counter;
    scanf("%d %d %d",&start,&stop,&counter);

    int i = start;
    while(i < stop)
    {
        printf("%c",str[i]);
        i += counter;
    }
    return 0;
}
