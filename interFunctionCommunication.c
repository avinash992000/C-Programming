#include<stdio.h>

//Function declarations
void add1(void); //No return type and No parameters
void add2(int,int); //No return type and With parameters
int add3(void); //Return type and No parameters
int add4(int,int); //Return type with parameters

void add1(void) //No return type and No parameters
{
    int x,y;
    printf("\nEnter x,y values: ");
    scanf("%d %d",&x,&y);
    int result = x + y;
    printf("\nThe addition value of add1 method is: %d",result);
}

void add2(int x,int y) //No return type and With parameters
{
    int result = x + y;
    printf("\nThe addition value of add2 method is: %d",result);
}

int add3(void) //Return type and No parameters
{
    int x,y;
    printf("\nEnter x,y values: ");
    scanf("%d %d",&x,&y);
    int result = x + y;
    return result;
}

int add4(int x,int y) //Return type with parameters
{   
    return x+y;
}

int main()
{
    add1();
    add2(100,200);
    int result = add3();
    printf("\nThe addition value of add3 method is: %d",result);
    result = add4(741,852);
    printf("\nThe addition value of add4 method is: %d",result);
    printf("\nThank you!");
    return 0;
}
