#include <stdio.h>

int main()
{
	int i, N;
	//input N and print all odd numbers less than N
	//Hint : start a for loop at i = 1, and increment by 2 i.e. i += 2.
    scanf("%d",&N);
    for(i=1;i<N;i+=2){
        printf("%d ",i);
        
    }
	return 0;
}
