#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int*) malloc(sizeof(int));//Manually memory allocated
    int x = 100;//Automatically memory allocated
    printf("Address stored in pointer: %u\tValue stored in address: %d\n",ptr,*ptr);
    printf("Address of x is: %u\tValue stored in x: %d",&x,x);
    return 0;
}
