#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


#include<stdio.h>
int getPartitionElement(int arr[], int size) {
   int right = 0, left = 0;
   for(int i = 1; i < size; i++)
       right += arr[i];
      
    for(int i = 0, j = 1; j < size; i++, j++){
         right -= arr[j];
         left += arr[i];
        //printf("%d-->%d\n",left,right);
         if (left == right){
             //printf("%d-->",i+1);
            return arr[i+1];
         }
      }
   return -1;
}
int main() {
   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
   //int size = sizeof(arr) / sizeof(arr[0]);
   printf("%d",getPartitionElement(arr, n));
}
