#include <stdio.h> 

int main()
{
	int A,B,c;
	//Increment A by B and print the result. Repeat three times.
    scanf("%d %d",&A,&B);
    printf("%d",A+B);
    printf(" ");
    c=B*2;
    printf("%d",A+c);
    printf(" ");
    B*=3;
    printf("%d",A+B);
        
	
	return 0;
}
