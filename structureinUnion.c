#include<stdio.h>
#pragma pack(1)
struct point
{
    int x;
    int y;
};//8 Bytes

union point1
{
    int x;//4
    struct point p;//8
}p1;//8

int main()
{
    printf("Size: %ld\n",sizeof(p1));
    return 0;
}
