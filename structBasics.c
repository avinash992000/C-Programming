/*
    Structures:
        1. Def: Collection of different type of data elements is known as structures
        2. How to declare?
            Syntax:
            struct tagName              struct                  struct tagName
            {                           {                       {
                type1 var1;                 type1 var1;             type1 var1;
                type2 var2;                 type2 var2;             type2 var2;
                .                           .                       .
                .                           .                       .
                typen varN;                 typen varN;             typen varN;
            };                          }Svar1,Svar2,....;        }Svar1,Svar2,...;
            struct : Keyword used to declare the structure
            tagName : Name of the structure
            var1,var2 : Members of structures
            Svar1, Svar2,... : Structure variables
            
            **Note: Declaration of structure will be known as blueprint of variable
            **Note: Memory will not be allocatd after declaration of structure. When we prepare structure variable then only memory will be allocated for specific structure variable
            **NOte: Because of memory was not allocated initializing members of structures while declaration is invalid;
            struct test
            {
                int x = 100; //Invalid due to wrong syntax
                int y;
            }t1;
            **NOte: Inside structure declaration the members should not be initialized.
        3. Size of structure variable will be calculated based on, sum of all the members size of struture.
            Above Example: x and y both are integers => 4 + 4 = 8Bytes
        4. How to initialize struture members:
            1. Member by member initialization
            2. All members initialization at a time
            3. Designated initialization
            4. Read the data from user
        5. How to access struture members:
            1. Structure members can be accessed by following
                1. Using variable: dot [.] operator
                2. Using pointer: indirection [->] operator
                Note: The . or ->, these are separating the struture variable/pointer and structure member
        6. Where to place structure declaration
            1. As global
            2. As local
*/

#include<stdio.h>
struct point
{
    int x;
    int y;
};//By declaring above, the compiler wont allocate memory untill user creates variable of structure
int main()
{
    struct point p1; //Now memory will be allocated for point p1 [Occupies 8 bytes of memory]
    p1.x = 100;
    p1.y = 200;

    struct point p2 = {450,650};

    printf("%d %d\n",p1.x,p1.y);
    printf("%d %d\n",p2.x,p2.y);
    return 0;
}
