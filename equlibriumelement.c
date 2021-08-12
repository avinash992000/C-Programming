#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int rightsum=0,leftsum=0;
    for(int i=0;i<n;i++) rightsum+=a[i];
    for(int i=0;i<n;i++){
        rightsum-=a[(n-1)-i];leftsum+=a[i];
        if(rightsum==leftsum){
            printf("%d\n",i+1);
            return 0;
        }
            
    }
    
    return 0;
}
