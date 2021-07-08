#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = 0, i = 0, j;
    while(str[i] != '\0')
    {
        len++;//6
        i++;
    }
    //while(str[i++]!='\0'); i -> length of string
    printf("Before reverse, the string is: %s\n",str);
    i = 0; j = len-1;
    while(i < j)
    {
        //0:n 1:a 2:e 3:v 4:e 5:J 6:\0
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }
    printf("After reverse, the string is: %s\n",str);
    return 0;
}
