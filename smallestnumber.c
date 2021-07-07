#include<stdio.h>
#include<stdlib.h>
	
int main()
{
    int i, N,d=0;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    for (i = 0; i < N-1; i++){
        if(arr[i]<arr[i+1]){
            d=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=d;
        }
    }
    printf("%d",arr[N-1]);
    return 0;
}
