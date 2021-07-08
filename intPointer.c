#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    //Note: This is not at all best way of using pointer. Generally pointers are used to manage memory at runtime of the program
    /*
        Allocation of memory at run-time: [Manual memory allocation]
            -> ALl of these methods are available in stdlib.h
                -> malloc : void* malloc(size_t)  -> Entire memory as single block
                -> calloc : void* calloc(n,size_t) -> Entire memory as n blocks
                -> realloc : realloc(ptr,newSize)
                -> free : free(pointer)
    */
    printf("The value stored by pointer: %d",*ptr);
}
