/*
    Validity of Traingle:
        -> Sum of all degrees is equal to 180
        -> None of the degree values should not equal to zero
*/

#include<stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter angle1, angle2 and angle3 values: ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1>0 && angle2>0 && angle3>0 && (angle1+angle2+angle3)==180)
        printf("Valid Traingle");
    else
        printf("Not a valid traingle");
    return 0;
}
