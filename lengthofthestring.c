#include<stdio.h>
int strlen(char* s)
{
    int i=0;
    while(*(s + i++));
    return --i;
}
int main()
{
	char str[50];
	gets(str);
	printf("%d", strlen(str));
	return 0;
}
