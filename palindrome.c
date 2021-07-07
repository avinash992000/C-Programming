#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int palindrome(char* str)
{
	int i=0,j=strlen(str)-1;
    while(i<j){
        if(*(str+i)!=*(str+j))
            return 0;
        i++;j--;
    }
    return 1;
}	
int main()
{
  char str[50];
  gets(str);
  printf("%d", palindrome(str));
  return 0;
}
