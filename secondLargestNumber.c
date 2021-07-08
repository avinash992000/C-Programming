#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x,y,z values:");
    scanf("%d %d %d",&x,&y,&z);//I. 20 12 15, II. 15 20 12

    if(x>=y && x>=z)
    {
        if(y>=z)    printf("%d is second highiest number",y);
        else        printf("%d is second highiest number",z);
    }
    else if(y>=x && y>=z)
    {
        if(x>=z)    printf("%d is second highiest number",x);
        else        printf("%d is second highiest number",z);
    }
    else
    {
        if(x>=y)    printf("%d is second highiest number",x);
        else        printf("%d is second highiest number",y);
    }
}
