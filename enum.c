#include<stdio.h>

enum month{Jan=1,Feb,Mar,Apr=6,May,Jun,Jul=1,Aug,Sep,Oct=9,Nov,Dec};

int main()
{
    printf("%d %d %d %d %d %d %d %d %d %d %d %d",Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec);
    printf("\n%ld",sizeof(enum month));
    return 0;
}
/*
    Points to remember:
        1. enum can be used to define enumeration
        2. List of members of enum could be called as enumerators
        3. By default initial value of first member is 0
        4. If we want to modify we can do it, But value must be an integer
*/
