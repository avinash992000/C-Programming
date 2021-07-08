#include<stdio.h>
#pragma pack(1)
struct point
{
    char ch;
    int ch1;
}p1;

int main()
{
    printf("Size is: %ld",sizeof(p1));
    /*
        Note: Due to slack / empty bytes totally 8 bytes of memory will be allocated instead of 5 bytes
        How to control?
            -> By using #pragma pack(1)
    */
}
