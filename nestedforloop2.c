#include <stdio.h>

int main()
{
	//Your code here
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
    printf("\n");
    }
        
	return 0;
}
