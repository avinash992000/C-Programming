#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
  char str[50];
  gets(str);
  int n,i=0,j;
   n=strlen(str);
    j=n-1;
    while(i<j){
        if(str[i]!=str[j]){
            printf("0");
            return 0;
        }
        i++;
        j--;
    }
    printf("1");
  return 0;
}
