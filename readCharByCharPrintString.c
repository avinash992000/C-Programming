#include<stdio.h>
int main()
{
    char ch, str[100];
    /*
        str[100] = Stores data in the index of 0 to 99 [0 to 98 for data bits and 99th bit for \0]
    */
    int i = 0;
    do
    {
        scanf("%c",&ch);//Jeevan
        str[i] = ch;//0:J, 1:e, 2:e, 3:v, 4:a, 5:n 6:\n
        i++;//For the last increment i value is 7
    } while (ch!='\n');//\n -> Termination chraracter
    str[--i] = '\0';
    printf("%s",str);
    return 0;
}
