/*
    Problem statement: Array of structures
    Procedure:
        -> General array
            datatype nameOfVariable[size]
        -> Struture array
            struct nameOfVariable[size]
*/
#include<stdio.h>
struct student
{
    int roll;
    float cgpa;
}s[5];
/*
    s[5] => 0 1 2 3 4
    s[0] => 8 bytes [Two blocks: roll and cgpa]
    s[1] => 8 bytes
    s[2] => 8 bytes
    s[3] => 8 bytes
    s[4] => 8 bytes
    s and stu, both are array of structures
*/
int main()
{
    struct student stu[2] = {
        {1227, 8.5},
        {1253,8.7}
    };
    int i;
    for(i=0;i<2;i++)
        printf("\n%d %.2f",stu[i].roll, stu[i].cgpa);

    for(i=0;i<5;i++)
    {
        printf("\nEnter Roll and CGPA of student: ");
        scanf("%d %f",&s[i].roll,&s[i].cgpa);
    }
    for(i=0;i<5;i++)
        printf("\n%d %.2f",s[i].roll, s[i].cgpa);
    return 0;
}
