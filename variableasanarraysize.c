#include<stdio.h>
int main()
{
	int N,i,j; 
	scanf("%d", &N); //acquiring the value of N, the size of array //declaring an array of size N.
    int arr[N];
    for(i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    for(j=N;j>0;j--){
        printf("%d ",arr[j]);
    }
	//input the elements of the array here and then print them in reverse
	

	return 0;
}
