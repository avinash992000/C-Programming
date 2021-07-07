#include<stdio.h>
int main()
{
    /*
        Area of Circle: pi * r * r
    */
    float radius;
    float pi = 22.0/7;//float pi = 3.14;
    printf("Enter radius value: ");
    scanf("%f",&radius);
    float areaOfCircle = pi * radius * radius;//pi*pow(radius,2) [#include<math.h>] 
    printf("Area of Circle is: %f",areaOfCircle);
    return 0;
}
