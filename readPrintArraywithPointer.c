#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr;
    /*
        Name of the array[Reference by default]=>&array[0]
        arr[5] => TOtally 5 elements
        &arr[0] => 102030   <- ptr+0
        &arr[1] => 102034   <- ptr+1 [ptr + 1*4 => ptr + 4]
        &arr[2] => 102038   <- ptr+2 [ptr + 2*4 => ptr + 8]
        &arr[3] => 102042   <- ptr+3 [ptr + 3*4 => ptr + 12]
        &arr[4] => 102046   <- ptr+4 [ptr + 4*4 => ptr + 16]
    */
    int i;

    for(i=0;i<5;i++)    scanf("%d",ptr+i);

    for(i=0;i<5;i++)    printf("Address: %u\tValue :%d\n",(ptr+i),*(ptr+i));
    return 0;
}
