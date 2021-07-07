#include<stdio.h>
int main()
{
    char names[5][10] = {"Jeevan", "Kumar","Tanmay","Rushik","Jyothi"};
    /*
            0   1   2   3   4   5   6   7   8   9 
        0:  J   e   e   v   a   n   \0
        1:  K   u   m   a   r   \0
        2:  T   a   n   m   a   y   \0
        3:  R   u   s   h   i   k   \0
        4:  J   y   o   t   h   i   \0
    */
    int i;
    for(i=0;i<5;i++)
        puts(names[i]);
        
    for(i=0;i<5;i++)
    {
        int j = -1;
        while(names[i][++j])
            printf("%c",names[i][j]);
        printf("\n");
    }
    return 0;
}
