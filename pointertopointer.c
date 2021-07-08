#include<stdio.h>
int main()
{
    int x = 100;
    int *ptrx = &x;

    printf("The value of variable is: %d %d\n\n",x,*ptrx);
    printf("The address of variable is:%u %u\n\n",&x,ptrx); 

    printf("The Address of pointer is: %u\n",&ptrx);
    return 0;
}
