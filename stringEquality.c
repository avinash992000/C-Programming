#include<stdio.h>
#include<string.h>
int main()
{
    //printf("HellO == Hello => %d",strcmp("Hello","hello"));
    /*
        NOte: Dont try to do "Hello" == "Hello" [Invalid operation]
        strcmp(string1, string2)
            0 : if string1 and string2 both are same
                Hello == Hello => 0
            1 : if character in string1 is having large ascii vale than string2 character
                hello == Hello => 1
                h -> Ascii value is greater than H
            -1: if character in string1 is having less ascii value than charater in string2
                Hello == hello => -1
                H -> ASCII value is smaller than h
        Logic:
            str1[i] => str1[i]!='\0'
    */
    char str1[100], str2[100];
    gets(str1);//Jello
    gets(str2);//Hello

    int i = 0;
    while(str1[i] && str2[i])
    {
        if(str1[i]!=str2[i])
        {
            if(str1[i] > str2[i])   printf("1");
            else                    printf("-1");
            return 0;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')  printf("0");
    else
    {
        str1[i] > str2[i] ? printf("1") : printf("0");
    }
    return 0;
}
