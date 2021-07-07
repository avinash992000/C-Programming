#include<stdio.h>
int main()
{
    float radius, pi = 22.0/7;
    printf("Enter radius value: ");
    scanf("%f",&radius);

    float cir = 2 * pi * radius;

    printf("Circiference of Circle [2*pi*radius]: %f",cir);
    return 0;
}
