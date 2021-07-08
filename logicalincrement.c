#include<stdio.h>
int main()
{
    int x = 100;
    int y = 200;
    printf("%d\n",x && y);//100 && 200 => 1
    printf("%d\n",x++ || y++);//1
    printf("x = %d y = %d",x,y);
    return 0;
}
