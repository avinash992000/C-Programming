#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int*)malloc(sizeof(int));//Dynamic Memory Allocation
    *ptr = 5000;
    printf("The value is: %d\tThe Address is: %u",*ptr,ptr);
    free(ptr);//De-allocation of memory
    printf("The value is: %d\tThe Address is: %u",*ptr,ptr);
    return 0;
}
