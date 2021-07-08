#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p = {100,200};
    printf("Accessing members using variable: X = %d\tY = %d\n",p.x,p.y);

    struct point *ptr = &p;
    printf("Accessing members using pointer: X = %d\tY = %d",ptr->x,ptr->y);
    return 0;
}
