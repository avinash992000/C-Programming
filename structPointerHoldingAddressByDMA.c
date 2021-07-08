#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int *ptr;
};

int main()
{
    struct point *ptr = (struct point*) malloc(sizeof(struct point));
    ptr->x = 520;
    ptr->ptr = &(ptr->x);

    printf("X = %d\tAddress of X = %u\tValue of X = %d",ptr->x,ptr->ptr,*(ptr->ptr));
}
