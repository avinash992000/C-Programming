#include<stdio.h>
int main()
{
    char name[7] = "Jeevan";
    char name1[] = "Jeevan Kumar";
    char name2[7] = {'J','E','E','V','A','N','\0'};
    char *name3 = "Kumar";

    printf("%s %s %s %s",name,name1,name2,name3);
    return 0;
}
