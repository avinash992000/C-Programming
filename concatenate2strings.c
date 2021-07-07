#include<stdio.h>
void strcat(char* s1, char* s2)
{
    int i;
    int len = strlen(s1);
    for(i=0;*(s2+i);i++)
        *(s1+len+i) = *(s2+i);
    *(s1+len+i)='\0';
}
int main()
{
	char str1[50], str2[50];
	gets(str1);
	gets(str2);
	strcat(str1, str2);
	puts(str1);	
	return 0;
}
