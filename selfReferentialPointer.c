#include<stdlib.h>
#include<stdio.h>

struct point
{
    int x;
    struct point *p;
};

//Note: Self referential variable should not be placed as a member of structure, But self referential pointer can be placed as a member of structures. This leads to preparation of linked list.

int main()
{
    struct point *ptr = (struct point*) malloc(sizeof(struct point));
    ptr->x = 100;
    ptr->p = ptr;
    return 0;
}
