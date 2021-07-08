#include<stdio.h>
int main()
{
    /*printf("Jeevan Kumar");
    printf("\n%d",100);
    int x = 5000;
    printf("\n%d",x);
    printf("\n%10d",55);//10 characters space will be given to print [10:Min space] => right padding
    printf("\n%2d",5555);
    printf("\n%-10d%d",55,4444);//Left padding*/

    printf("%d\n",printf("Jeevan Kumar"));
    /*
        Note: 
            -> printf return value is integer
            -> printf returns how many characters are printed on screen
    */
    printf(" %d",printf(" %d",printf(" %d",printf("Jeevan Kumar"))));
    return 0;
}
