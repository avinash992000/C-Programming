#include<stdio.h>
int main()
{
	int i, a[10] = {0}; //direct initialisation
	for (i = 0; i < 10; i++) scanf("%d", &a[i]);
	//print the odd indexed elements of the array here
    for(i=1;i<10;i=i+2){
        printf("%d ",a[i]);
    }

	return 0;
}
