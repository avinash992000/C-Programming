/*
    Two friends:
        -> Watermelon with eight of W kilo
        -> Two persons, each wants even number of weight
        -> Constraint: 1 <= W <= 100
        Logic: Even + Even = Even
        -> If input is even number, Verify the answer and print "Yes" or "No"
        -> Else print "No"
*/
#include<stdio.h>
int main()
{
    int weight;
    scanf("%d",&weight);

    if(weight %2 == 0 && weight!=2)     printf("Yes");
    else                                printf("No");
    return 0;
}
