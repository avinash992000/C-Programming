#include<stdio.h>
int main()
{
    float base, height;
    printf("Enter base and height values: ");
    scanf("%f %f",&base,&height);

    float areaOfTraingle = 0.5 * base * height;

    printf("Area of Traingle: %f",areaOfTraingle);
}
