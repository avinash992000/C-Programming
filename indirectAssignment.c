#include<stdio.h>
int main()
{
    int x,*px = &x;
    x = 30;
    printf("Printing data by using variable: Value: %d\tAddress: %u\n",x,&x);
    printf("Printing data by using pointer: Value: %d\tAddress: %u\n",*px,px);

    //Changing value by using variable
    x = 50; //Direct Assignment
    printf("Printing data by using variable: Value: %d\tAddress: %u\n",x,&x);
    printf("Printing data by using pointer: Value: %d\tAddress: %u\n",*px,px);

    *px = 100;//Indirect Assignment
    /*
        *px = 100
        *(px) = 100
        *(&x) = 100
        *&x = 100 [Dereference and reference both can be cancelled]
        x = 100
    */
    printf("Printing data by using variable: Value: %d\tAddress: %u\n",x,&x);
    printf("Printing data by using pointer: Value: %d\tAddress: %u\n",*px,px);
    return 0;
}
