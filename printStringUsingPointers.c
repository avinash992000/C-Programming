#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "Jeevan";
    char *ptrName = name; //char *ptrName = &name[0] [name <--> &name[0]]
    /*
        name = Jeevan
        0->J    2001 
        1->e    2002
        2->e    2003
        3->v    2004
        4->a    2005 
        5->n    2006
        6->'\0' 2007
    */
    //Printing name by using while loop
    while(*ptrName != '\0')
        printf("%c ",*ptrName++);
    printf("\n");

    //Printing name by using for loop
    ptrName = name;//Reset pointer
    int i;
    for(i=0;i<strlen(name);i++)
        printf("%c ",*(ptrName+i));

    return 0;
}
