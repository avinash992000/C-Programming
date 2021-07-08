#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x,y,z values: ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>=y && x>=z)          printf("%d is larger",x);
    else if(y>=x && y>=z)     printf("%d is larger",y);
    else if(z>=x && z>=y)     printf("%d is larger",z);
}
