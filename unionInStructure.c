#include<stdio.h>
#pragma pack(1)

struct student
{
    int roll;//4 bytes
    union stuInfo
    {   
        char gender;//1 Byte
        float cgpa;//4 Bytes [Largest]
    }si;//4 Bytes
}s;//8 Bytes

int main()
{
    s.roll = 1227;
    s.si.gender = 'M';
    s.si.cgpa = 8.7;
    printf("Roll: %d\tGender: %c\tCGPA: %.2f\n",s.roll,s.si.gender,s.si.cgpa);
    printf("roll: %u\tsi: %u\tgender: %u\tcgpa: %u",&s.roll,&s.si,&s.si.gender,&s.si.cgpa);
    printf("%ld",sizeof(s));
    return 0;
}
