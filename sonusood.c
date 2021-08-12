#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


#include<stdio.h>
int main()
{
    char str[100],str1[100];
    int count=0;
    gets(str1);
    gets(str);

    int len = 0, i = 0, j;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    i = 0; j = len-1;
    while(i < j)
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }
    for(int i=0;i<len;i++){
        if(str[i]==str1[i]){
            count++;
        }
    }
    (count==len) ? printf("it is correct"):printf("it is wrong");
    return 0;
}
