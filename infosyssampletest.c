#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n,experience,count=0,temp,j;
    scanf("%d",&n);
    //printf("%d",n);
    int a[n],b[n];
    scanf("%d",&experience);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    
    
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    
    
    
    for(int i=0;i<n;i++){
        if(experience>=a[i]){
            count++;
            experience += b[i];
            }
        }
    printf("%d",count);
    return 0;
}
