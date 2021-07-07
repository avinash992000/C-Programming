/*
    Input: In celcius
        Eg: 36 degrees
    Output: In Fah
        Output: (1.8*celcius)+32
*/
#include<stdio.h>
int main()
{
    float celcius;
    printf("Enter degree value in celcius: ");
    scanf("%f",&celcius);

    double far = (1.8 * celcius) + 32;

    printf("Cel: %f  ==> Fer: %lf",celcius,far);
    return 0;
}
