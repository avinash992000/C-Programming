#include<stdio.h>
int main()
{
    int x = 1587;
    /*  
        Binary value of x: 00000000 00000000 00000110 00110011
                            Byte 4    Byte 3  Byte 2   Byte 1
        -> Integer occupies 4 bytes of data [Pointer px holds total above four bytes]
        -> Character occupies 1 byte ofdata [Pointer ptr holds only first byte of data]
            ptr => 00110011 => 1*1 + 1*2 + 16*1 + 32*1 => 1+2+16+32 => 51
            ptr+1 => 00000110 => 2+4 => 6
        Pointer Arithmetic: [Only addition and subtraction]
        Eg: 
            &var = 564560
            int *ptr = &var; [Integer size is 4 bytes]
                ptr -> 564560
                ptr+1 => ptr + 1*sizeofDatatype => ptr + 4 => 564560 + 4 => 564564
                ptr+4 => ptr + 4*sizeofDatatype => ptr + 4*4 => 564560 + 15 = 564576
            char *ptr = &var [Character size is 1 byte]
                ptr -> 564560
                ptr+1 => ptr + 1*sizeofDatatype => ptr + 1 => 564560 + 1 => 564561
            
            double *ptr = &var
                ptr -> 564560
                ptr+1 => ptr + 1*sizeofDatatype => ptr + 8 => 564560 + 8 => 564568
    */
    int *px = &x;

    printf("The value of x is: %d\n\n",*px);
    //*px => *&x => x

    char *ptr = px;

    printf("The value of x is: %d\n\n",*ptr);
    printf("The value of x is: %d\n\n",*(ptr+1));
    /*
        NOte: No cross iniialization while working pointers, if you do there may be a chance of losing the data.
    */
}
