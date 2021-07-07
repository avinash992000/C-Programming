#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	//your code here
    if(islower(ch))  printf("%c",toupper(ch));
    else if(isupper(ch)) printf("%c",tolower(ch));
	return 0;
}
