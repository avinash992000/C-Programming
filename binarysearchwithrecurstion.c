#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int binarysearch(int* arr,int l,int m,int p){
    
    if(m>=l){
        int mid = l+(m-1)/2;
    if(arr[mid] == p)
        return mid;
    if(arr[mid]>p)
        return binarysearch(arr,l,mid-1,p);
    return binarysearch(arr,mid+1,m,p);}
    return -1;
}

int main(){
    
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    int result=binarysearch(arr,0,n-1,a);
    (result==-1) ? printf("element not present"):printf("element at %d index position",result);
    return 0;
}
