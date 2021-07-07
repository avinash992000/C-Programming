#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<float.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float  a,b;
    scanf("%f %f",&a,&b);
    long x = a + b;
    (a+b-x == 0) ? printf("%ld",x): printf("%.2f",a+b);
    return 0;
}
