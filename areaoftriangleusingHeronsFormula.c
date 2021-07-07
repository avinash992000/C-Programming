/*
    s = (side1+side2+side3)/2
    sqrt(s*(s-side1)*(s-side2)*(s-side3))
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float side1,side2,side3;
    printf("Enter side1, side2 and side3 values: ");
    scanf("%f %f %f",&side1,&side2,&side3);

    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));

    printf("Area of Traingle based on Heran formula is: %lf",area);
}
