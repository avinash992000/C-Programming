#include<stdio.h>
int main()
{
    printf("Size of Character: %ld\n",sizeof(char));
    printf("Size of Integer family: %ld %ld %ld\n",sizeof(short),sizeof(int),sizeof(long long));
    printf("Size of Float family: %ld %ld %ld\n",sizeof(float),sizeof(double),sizeof(long double));
    printf("\n\n");
    printf("Size of Character Pointer: %ld\n",sizeof(char*));
    printf("Size of Integer family Pointer: %ld %ld %ld\n",sizeof(short*),sizeof(int*),sizeof(long long*));
    printf("Size of Float family Pointer: %ld %ld %ld\n",sizeof(float*),sizeof(double*),sizeof(long double*));
    /*
        Note: The sizes of types are not fixed. It depends on type of platform
        Datatypes:
        32-Bit platform:
            -> CHar - 1
            -> Short - 1, int - 2, long - 4[2], long long - 8
            -> float - 2, double - 4, long double - 6 [8]
        64-Bit platform:
            -> CHar - 1
            -> Short - 2, int - 4, long - 8[4], long long - 16
            -> float - 4, double - 8, long double - 10 [16]
        
        Pointers:
            32 bit -> 4 bytes
            64 bit -> 8 bytes
    */
    return 0;
}
