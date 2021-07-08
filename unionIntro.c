/*
    Union:
        1. Def: Used to place different data members into it [Same like as structures]
        2. How to declare:
            union tagName
            {
                typ1 var1;
                type2 var2;
                .
                .
                typen varN;
            };
*/
#include<stdio.h>
#pragma pack(1)
struct point
{
    char ch;
    int i;
    float f;
}p;

union point1
{
    char ch;
    int i;
    float f;
}p1;

int main()
{
    printf("Size of structure: %ld\nSize of Union: %ld",sizeof(p),sizeof(p1));
    return 0;
}
/*
    Structures vs Unions:
            Strutures                                       Unions
    1. size = (sum of sizes of its membres)             1. size = largest sized element size
    
    2. No sharing of memory                             2. All members sharing the memory
    3. At a time all the members can be                 3. At a time only one memeber can be 
    accessed efficiently                                    accessed
    4. All can be initialized at a time                 4. Only can be initialized at a time
    5. Modification of one member is not                5. Modification of one member is affecting
    affecting another one                                   another
    6. All the varibles are stored in                   6. ALl the the members are stored in same  
    different memory locations                              memory location
*/
