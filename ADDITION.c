#include<stdio.h>
#include<limits.h>
int main()
{
    printf("Min: %d\n",INT_MIN);
    printf("Max: %d\n",INT_MAX);

    /*
        Min: -214,74,83,648
        Max: 214,74,83,647
    */
    int num1 = 2147483647;
    int num2 = 10;
    int sum = num1 + num2;
    printf("%d\n",sum);//2147483657 ==> -2147483639
    long x = num1 + num2;//-2147483639
    printf("%ld",x);
    /*
        Note:
         -> Define the variable as long types [Whenever you want to perform addition of two int]
    */  
    return 0;
}
