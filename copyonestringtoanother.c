/*
    Problem statement: Copy one string into another string
    Procedure:
        -> Prepare two strings source and destination with same length
        -> Read value into source string
        -> Traverse through source string and copy element by element into destination srting
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], d[100];
    gets(s);
    int i = -1;
    /*
        S: 0:H 1:e 2:l 3:l 4:o 5:\0[ASCII -> 0]
        D: 0:H 1:e 2:e 3:l 4:o 5:\0
    */
    while(s[++i])
        d[i] = s[i];
    
    d[i] = '\0';
    printf("Copied string: %s\n",d);

    strcpy(d,s);
    printf("Copied string: %s\n",d);

    int len = strlen(s);
    printf("The length of string is: %d",len);
    return 0;
}
