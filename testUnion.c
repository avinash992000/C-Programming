#include<stdio.h>
union un
{
    int x;
    int y;
}u;

int main()
{
    printf("%u %u",&u.x,&u.y);
    return 0;
}
