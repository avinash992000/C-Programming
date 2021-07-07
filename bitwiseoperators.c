/*
    Bitwise Operators:
        -> It works on bit value of a number
        -> List of operators:
            1. bitwise AND                  &
            2. bitwise OR                   |
            3. exclusive OR                 ^
            4. left shift                   <<
            5. right shift                  >>
            6. negation (1's complement)    ~
        -> Bitwise AND => & [Returns 1 if two bit values are 1, Otherwise 0]
            1   1   1
            1   0   0
            0   1   0
            0   0   0
        -> Bitwise OR => | [Return 0 if two bit values are 0, Otherwise 1]
            1   1   1
            1   0   1
            0   1   1
            0   0   0
        -> Exclusive OR => ^[Carot]
            -> Gives output as 1 if two bits are not same, Otherwise 0
            1   1   0
            1   0   1
            0   1   1
            0   0   0
        -> Left shift => <<
            -> Which shifts the bits towards left side. consequntly the data value will be multipled by 2 for every bit movement.
            -> ShortCut for result: 
                number << shiftValue
                    **REsult: number * (2 ^ shiftValue)
        -> Right shift => >>
            -> Which shifts the bits towards right side, consequently the given data divides by 2 for evry bit movement
            -> SHortcut for result:
                number >> shiftvalue
                    Result: number / (2 ^ shiftValue)
        -> Negation / 1's complement operator => ~
            -> Which converts all 0 bits into 1, and all 1 bits into 0
            -> Shortcut:
                Input: NUmber[May be +ve / -ve]
                Output: -(Number+1)
*/
#include<stdio.h>
int main()
{
    int x = 33, y = 23;
    printf("%d & %d: %d\n",x,y,x & y);
    printf("10 & 20: %d\n", 10 & 20);
    /*
        10: 0000 1010
        20: 0001 0100
            0000 0000 => 0 [Result]
    */
    printf("10 | 20: %d\n",10|20);
    /*
        10: 0000 1010
        20: 0001 0100
            0001 1110 => 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 => 1*16 + 1*8 + 1*4 + 1*2 =16+8+4+2 = 30
    */
    //printf("%d\n",10.25 & 10.26);//Invalid statement
    printf("12 ^ 14: %d\n",12 ^ 14);
    /*
        12: 0000 1100
        14: 0000 1110
        ^   0000 0010 => 2 [Result]
    */
    printf("10 ^ 20: %d\n",10^20);
    /*
        10: 0000 1010
        20: 0001 0100
            0001 1110 => 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 => 1*16 + 1*8 + 1*4 + 1*2 =16+8+4+2 = 30
    */
    printf("10<<3: %d\n",10<<3);
    /*
        10: 00001010
        10<<3: 01010000 [Result] => 80
    */
    printf("10>>2: %d\n",10>>2);
    /*
        Result: number / (2^shiftValue)
            10/(2^2) => 10/4 = 2
    */
    printf("~10: %d\n",~10);//-11
    /*
        Output: -(NUmber+1)
                -(10+1) => -11
    */
    printf("~-10: %d",~-10);//9
    /*
        Output: -(number+1)
                -(-10+1) => -(-9) => 9
    */
    printf("REsult: %d",~-9<<2);
    /*
        ~-9<<2:
         -> ~-9     => 8
         -> 8<<2    => 8*2^2 => 8*4 = 32
    */
    return 0;
}
