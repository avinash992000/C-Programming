

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main() {
    
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
