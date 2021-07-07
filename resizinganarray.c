#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr = (int*) malloc(sizeof(int) * 3);
	int i, N;
    scanf("%d",&N);
	//input N and then use realloc to change size of array arr.
    realloc(arr,sizeof(int)*10);
    for(i=0;i<N;i++){
        scanf("%d",arr+i);
    }
	for(i=N-1;i>=0;i--){
        printf("%d ",*arr+i);
    }
	return 0;
}
