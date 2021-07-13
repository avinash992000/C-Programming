#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int main() {
    int n, k,i,j,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                if(i<k){
                    if(j<k){
                        printf("0");
                        return 0;}
                    else{
                        printf("1");
                        return 1;   }
                }
                else
                {   printf("1");
                    return 1;}
            }
        }
    }
    for(i=0;i<n;i++){
        if(i>=k){
            count++;
        }
    }
    printf("%d",count);

/*    int main()  
{  
    //Initialize array   
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};   
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    printf("Duplicate elements in given array: \n");  
    //Searches for duplicate element  
    for(int i = 0; i < length; i++) {  
        for(int j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", i);  
        }  
    }  */
    return 0;  
} 


